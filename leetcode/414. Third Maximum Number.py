def thirdMax(nums) -> int:
    nums.sort()
    nums = list(set(nums))
    nums.sort()
    if len(nums) < 3 : return int(nums[len(nums)-1])
    return int(nums[len(nums)-3])

nums = [-1,2,3]
print(thirdMax(nums))

# https://leetcode.com/problems/third-maximum-number/submissions/