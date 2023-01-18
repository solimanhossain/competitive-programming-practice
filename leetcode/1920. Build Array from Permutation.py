class Solution(object):
    def buildArray(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        array = []
        for i,x in enumerate(nums):
            array.append(nums[x])
        return array

nums = [0,2,1,5,3,4]
leetcode = Solution()
print(leetcode.buildArray(nums))

# https://leetcode.com/problems/build-array-from-permutation/