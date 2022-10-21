def removeElement(nums: [int], val: int) -> int:
    count = 0
    for i in nums:
        if i == val: 
            nums[count]=i
            count+=1
    return count

val = 3
nums = [3,2,2,3]
print(removeElement(nums,val))