#Link: https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/

class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        result = []
        max_candies = max(candies)
        for i in candies:
            if i == max_candies or i + extraCandies >= max_candies:
                result.append(True)
            else:
                result.append(False)
        return result
        