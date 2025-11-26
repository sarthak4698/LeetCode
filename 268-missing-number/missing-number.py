class Solution(object):
    def missingNumber(self, nums):
        n = len(nums)
        for i in range(n):

            expected = n * (n+1)//2
            actual = sum(nums)
            missing = expected - actual
        
        return missing 