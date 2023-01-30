class Solution:
    def countMatches(self, items: [[str]], ruleKey: str, ruleValue: str) -> int:
        count, x = 0, 0
        if ruleKey == "color": x = 1
        elif ruleKey == "name": x = 2
        for i in items:
            if i[x] == ruleValue: count += 1
        return count

soliman = Solution()
items = [["phone","blue","pixel"],["computer","silver","lenovo"],["phone","gold","iphone"]]
ruleKey = "color"
ruleValue = "silver"
print(soliman.countMatches(items,ruleKey,ruleValue))

# https://leetcode.com/problems/count-items-matching-a-rule/