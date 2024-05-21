#Link: https://leetcode.com/problems/subdomain-visit-count/

class Solution:
    subdomains = {}
    def subdomainVisits(self, cpdomains: List[str]) -> List[str]:
        self.subdomains = {}
        for domain in cpdomains:
            count = int(domain.split()[0])
            domain = domain.split()[1]
            self.addSubdomain(domain, count)
            subdomain = ""
            for ch in domain[::-1]:
                if ch == '.': self.addSubdomain(subdomain, count)
                subdomain = ch + subdomain
        return self.getResult()
    def addSubdomain(self, new: str, count: int):
        if new in self.subdomains: self.subdomains[new] += count
        else: self.subdomains[new] = count
    def getResult(self) -> List[str]:
        temp = []
        for x in self.subdomains:
            temp.append(str(self.subdomains[x]) + " " + x)
        return temp
