class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        mul, add = 1, 0
        while n:
            mul = mul * (n % 10)
            add = add + n % 10
            n = n // 10
        return mul - add

soliman = Solution()
n = 1
print(soliman.subtractProductAndSum(n))

# https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/