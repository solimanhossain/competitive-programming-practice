class Solution(object):
    def smallestEvenMultiple(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n % 2 == 0:
            return n
        return n * 2

n = 6
leetcode = Solution()
print(leetcode.smallestEvenMultiple(n))

# https://leetcode.com/problems/smallest-even-multiple/