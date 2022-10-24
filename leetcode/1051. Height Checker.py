def heightChecker(heights: [int]) -> int:
    count = 0
    check = heights.copy()
    heights.sort()
    for i,j in zip(check,heights): 
        print(i,j)
        if i==j: count+=1
    return count

heights = [5,1,2,3,4]
print(heightChecker(heights))