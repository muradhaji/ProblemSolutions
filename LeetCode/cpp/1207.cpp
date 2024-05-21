//Link: https://leetcode.com/problems/unique-number-of-occurrences/

class Solution {
private:
public:
    bool uniqueOccurrences(vector<int>& arr) {
        set<int> unique(arr.begin(), arr.end());
        set<int> unique_count;
        for(int num : unique)
            unique_count.insert(count(arr.begin(), arr.end(), num));
        return unique.size() == unique_count.size();
    }
};
