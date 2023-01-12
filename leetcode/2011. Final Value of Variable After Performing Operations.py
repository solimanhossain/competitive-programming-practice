def finalValueAfterOperations(operations) -> int:
    count = 0
    for i in operations: 
        if i[1] == '+': count += 1
        else: count -= 1
    return count

operations = ["--X","X++","X++"]
print(finalValueAfterOperations(operations))

# https://leetcode.com/problems/final-value-of-variable-after-performing-operations/