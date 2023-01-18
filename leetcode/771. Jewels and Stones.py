def numJewelsInStones(jewels, stones):
    count = 0
    for i in jewels:
        for j in stones:
            if i == j:
                count += 1
    return count

jewels = "aA"
stones = "aAAbbbb"
print(numJewelsInStones(jewels,stones))

# https://leetcode.com/problems/jewels-and-stones/