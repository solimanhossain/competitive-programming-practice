class Solution:
    def rotate(nums, k) -> None:
        start = k % len(nums)
        nums[:] = nums[-start:] + nums[:-start]


sp = Solution
nums = [1,2,3,4,5,6,7]
k = 3

sp.rotate(nums, k)
print(nums)

# https://leetcode.com/problems/rotate-array/