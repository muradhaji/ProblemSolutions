#Link: https://leetcode.com/problems/shuffle-string/

class Solution(object):
    def restoreString(self, s, indices):
        """
        :type s: str
        :type indices: List[int]
        :rtype: str
        """
        resultlist = list(s)
        for i in range(len(s)):
            resultlist[indices[i]] = s[i]
        result = ''.join(str(elem) for elem in resultlist)
        return result
        