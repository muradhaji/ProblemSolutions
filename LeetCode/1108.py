#Link: https://leetcode.com/problems/defanging-an-ip-address/

class Solution(object):
    def defangIPaddr(self, address):
        """
        :type address: str
        :rtype: str
        """
        address = address.replace('.','[.]')
        return address
        