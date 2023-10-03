#Link: https://leetcode.com/problems/number-of-recent-calls/

class RecentCounter:
    recent = list()

    def __init__(self):
        self.recent = []

    def ping(self, t: int) -> int:
        while self.recent and self.recent[0] + 3000 < t:
            self.recent.pop(0)
        self.recent.append(t)
        return len(self.recent)


# Your RecentCounter object will be instantiated and called as such:
# obj = RecentCounter()
# param_1 = obj.ping(t)
