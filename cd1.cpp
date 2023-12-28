from math import gcd, lcm


for _ in range(int(input())):
    x, y, k = map(int, input().split())
    if x > y: x, y = y, x
    if k == 1:
        print(x + gcd(x, y))
    else:
        print(2 * gcd(x, y))