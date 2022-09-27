def climbStairs(n):
    x,y = 1,0
    for i in range(n):
        x,y = x+y,x
    return x

num = int(input())
print(climbStairs(num))

# https://leetcode.com/problems/climbing-stairs/