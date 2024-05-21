//Link: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = candies[0];
        vector<bool> result(candies.size());
        for(int i = 1; i < candies.size(); i++)
            if(candies[i] > max) max = candies[i];
        for(int i = 0; i < candies.size(); i++)
            if(candies[i] == max || candies[i] + extraCandies >= max)
                result[i] = true;
        return result;
    }
};
