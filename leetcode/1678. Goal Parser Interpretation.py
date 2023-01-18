class Solution:
    def interpret(self, command: str) -> str:
        parser = ''
        for i in range(len(command)):
            if command[i] == 'G' or command[i]  == 'o':
                parser += command[i]
            elif command[i]  == '(':
                if command[i+1] == ')': parser += 'o'
                else:  parser += 'al'
        return parser

command = "G()(al)"
soliman = Solution()
print(soliman.interpret(command))

# https://leetcode.com/problems/goal-parser-interpretation/