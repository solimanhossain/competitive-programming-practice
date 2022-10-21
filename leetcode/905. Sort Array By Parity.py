def sortArrayByParity(arr: [int]) -> [int]:
    i,e = 0,0
    while i < len(arr):
        if arr[i]%2==0:
            arr[e], arr[i] = arr[i], arr[e]
            e+=1
        i+=1
    return arr

nums = [3,1,2,4,5]
print(sortArrayByParity(nums))

# https://leetcode.com/problems/sort-array-by-parity/submissions/