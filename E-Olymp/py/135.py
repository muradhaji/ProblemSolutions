#Link: https://www.e-olymp.com/az/problems/135

n = int(input())
arr = list(map(int, input().split()))
product = a = b = temp = 0
lcm = arr[0]

for i in range(1, n):
  a = lcm
  b = arr[i]
  product = a*b
  while b != 0:
    a %= b
    temp = a
    a = b
    b = temp
  lcm = product // a

print(lcm)
