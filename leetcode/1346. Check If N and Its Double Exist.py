def checkIfExist(arr) -> bool:
    for i in range(len(arr)):
        for j in range(len(arr)):
            if arr[i] == 2*arr[j] and i!=j:
                return True
    return False

arr = [10,2,5,3]
print(checkIfExist(arr))


# https://leetcode.com/problems/check-if-n-and-its-double-exist/