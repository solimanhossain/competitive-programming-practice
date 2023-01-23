class Solution:
    def pivotIndex(self, nums: [int]) -> int:
        sum1, sum2 = 0, 0
        for i in range(len(nums)):
            sum1 = sum(nums) - sum2 - nums[i]
            if sum1 == sum2: return i
            sum2 += nums[i]
        return -1

soliman = Solution()
nums = [1,7,3,6,5,6]
print(soliman.pivotIndex(nums))

# https://leetcode.com/problems/find-pivot-index/