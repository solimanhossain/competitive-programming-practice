class Solution(object):
    def cellsInRange(self, s) -> []:
        """
        :type s: str
        :rtype: List[str]
        """
        sheet = []
        for i in range(ord(s[0]),ord(s[3])+1):
            for j in range(int(s[1]),int(s[4])+1):
                sheet.append(chr(i)+str(j))
        return sheet

leetcode = Solution()
s = "A2:C1"
print(leetcode.cellsInRange(s))

# https://leetcode.com/problems/cells-in-a-range-on-an-excel-sheet/