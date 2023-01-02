def isPowerOfThree(n) -> bool:
    if n < 1: return 0
    while n % 3 == 0: n *= 1 / 3
    return n == 1

n = -1
print(isPowerOfThree(n))

# https://leetcode.com/problems/power-of-three/