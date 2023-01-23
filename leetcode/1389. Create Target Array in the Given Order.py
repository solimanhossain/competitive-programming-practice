class Solution:
    def createTargetArray(self, nums: [int], index: [int]) -> [int]:
        new_nums = []
        for i,v in enumerate(index): new_nums.insert(v,nums[i])
        return new_nums

soliman = Solution()
nums = [1,2,3,4,0]
index = [0,1,2,3,0]
print(soliman.createTargetArray(nums,index))

# https://leetcode.com/problems/create-target-array-in-the-given-order/