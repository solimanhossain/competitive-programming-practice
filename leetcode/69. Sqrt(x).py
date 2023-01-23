class Solution(object):
    def mySqrt(self, x: int) -> int:
        low, high = 1, x
        while(low <= high):
            mid = (low + high) // 2
            if x == mid * mid: return mid
            elif mid * mid > x: high = mid - 1
            else: low = mid + 1
        return high

soliman = Solution()
x = 8
print(soliman.mySqrt(x))

# https://leetcode.com/problems/sqrtx/