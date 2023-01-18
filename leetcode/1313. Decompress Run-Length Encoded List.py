class Solution:
    def decompressRLElist(self, nums: [int]) -> [int]:
        arr = []
        for i in range(0,len(nums),2):
            for x in range(nums[i]):
                arr.append(nums[i+1]) 
        return arr

soliman = Solution()
nums = [1,2,3,4]
print(soliman.decompressRLElist(nums))

# https://leetcode.com/problems/decompress-run-length-encoded-list/