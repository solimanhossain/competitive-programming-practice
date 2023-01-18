class Solution(object):
    def smallerNumbersThanCurrent(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        array = []
        for i in nums:
            count = 0
            for j in nums:
                if j < i:
                    count += 1
            array.append(count)
        return array

nums = [8,1,2,2,3]
leetcode = Solution()
print(leetcode.smallerNumbersThanCurrent(nums))

# https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/