def numIdenticalPairs(nums) -> int:
    count = 0
    for i,x in enumerate(nums):
        for j in range(i+1,len(nums)):
            if x == nums[j]:
                count += 1
    return count

nums = [1,2,3,1,1,3]
print(numIdenticalPairs(nums))

# https://leetcode.com/problems/number-of-good-pairs/