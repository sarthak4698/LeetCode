class Solution(object):
    def lengthOfLastWord(self, s):
        i = len(s)-1
        while i>=0 and s[i] ==' ':
            i =i -1
        
        length_of_lastword =0

        while i>=0 and s[i] != ' ':
            length_of_lastword = length_of_lastword+1
            i=i-1
        return length_of_lastword