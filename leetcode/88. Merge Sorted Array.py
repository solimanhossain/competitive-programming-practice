def merge(nums1, m, nums2, n) -> None:
    for i,j in zip(range(m,m+n),nums2) : nums1.insert(i, j)
    del nums1[m+n:]
    nums1.sort()

nums1 = [1,2,3,0,0,0]
m = 3
nums2 = [2,5,6]
n = 3

merge(nums1, m, nums2, n)

print(nums1)
# https://leetcode.com/problems/merge-sorted-array/submissions/