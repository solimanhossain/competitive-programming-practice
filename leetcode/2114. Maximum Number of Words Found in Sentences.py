class Solution(object):
    def mostWordsFound(self, sentences: [str]) -> int:
        count = 0
        for sentence in sentences:
            if len(sentence.split(' ')) > count:
                count = len(sentence.split(' '))
        return count

sentences = ["alice and bob love leetcode", "i think so too", "this is great thanks very much"]
soliman = Solution()
print(soliman.mostWordsFound(sentences))

# https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/