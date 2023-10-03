#Link: https://leetcode.com/problems/maximum-units-on-a-truck/

class Solution:
    def maximumUnits(self, boxTypes: List[List[int]], truckSize: int) -> int:
        boxTypes.sort(key = lambda x : x[1], reverse = True)
        max_sum = 0
        for x in boxTypes:
            if x[0] <= truckSize:
                max_sum += x[0]*x[1]
                truckSize -= x[0]
            else:
                max_sum += truckSize*x[1]
                break
        return max_sum
