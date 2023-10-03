#Link: https://leetcode.com/problems/design-parking-system/

class ParkingSystem:
    
    slots = [0,0,0]
    
    def __init__(self, big: int, medium: int, small: int):
        self.slots[0] = big
        self.slots[1] = medium
        self.slots[2] = small
        

    def addCar(self, carType: int) -> bool:
        if self.slots[carType-1] > 0:
            self.slots[carType-1] -= 1
            return True
        return False
        


# Your ParkingSystem object will be instantiated and called as such:
# obj = ParkingSystem(big, medium, small)
# param_1 = obj.addCar(carType)
