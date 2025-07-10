class Solution(object):
    def isPalindrome(self, x):
        rev =0
        original = x
        spm =0

        if (x <0 and x==0 and x is not 0):
            return False

        while x>0:
            spm = x%10
            rev = rev *10+spm
            x=x//10


        if(rev == original):
            return True
        else:
            return False       