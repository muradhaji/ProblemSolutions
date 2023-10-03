#Link: https://leetcode.com/problems/design-an-ordered-stream/

class OrderedStream:
    arr = []
    n = last_index = 0

    def __init__(self, n: int):
        self.n = n
        self.arr = [""]*n
        

    def insert(self, idKey: int, value: str) -> List[str]:
        self.arr[idKey - 1] = value
        result = []
        for i in range(self.last_index, self.n):
            if self.arr[i] != "":
                result.append(self.arr[i])
                self.last_index = i+1
            else: break
        return result
        

# Your OrderedStream object will be instantiated and called as such:
# obj = OrderedStream(n)
# param_1 = obj.insert(idKey,value)
