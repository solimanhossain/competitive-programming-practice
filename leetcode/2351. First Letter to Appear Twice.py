def repeatedCharacter(s: str) -> str:
    temp = []
    for i in s:
        if i in temp:
            return i;
        else:
            temp.append(i)

str1 = input()
print(repeatedCharacter(str1))

# https://leetcode.com/problems/first-letter-to-appear-twice/