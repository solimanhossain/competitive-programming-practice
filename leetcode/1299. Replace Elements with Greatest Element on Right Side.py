def replaceElements(arr: [int]) -> [int]:
    for i in range(len(arr)-1,0,-1):
        if(arr[i]>arr[i-1]):
            arr[i-1]=arr[i]
    arr = arr[1:]
    arr.append(-1)
    return arr

arr = [17,18,5,4,6,1]
print(replaceElements(arr))

# https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/