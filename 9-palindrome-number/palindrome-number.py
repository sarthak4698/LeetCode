class Solution(object):
    def isPalindrome(self, x):
        if x<0:
            return False

        rev = 0
        temp =x 

        while x>0:
            digit = x%10
            rev = rev*10 + digit 
            x = x//10

        if rev == temp:
            return True
        else:
            return False

        