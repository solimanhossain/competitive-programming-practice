class Solution:
    def isHappy(self, n: int) -> bool:
        while n:
            sum = 0
            while n:
                sum += (n % 10) ** 2
                n //= 10
            if sum == 1 or sum == 7: return True
            if 0 <= sum <= 9: return False
            n = sum
            

soliman = Solution()
n = 10
print(soliman.isHappy(n))

# https://leetcode.com/problems/happy-number/