class Solution(object):
    def missingNumber(self, nums):
        n = len(nums)

        expected_sum= n * (n+1)//2
        actual_sum=sum(nums)
        missing_value = expected_sum - actual_sum 
        return missing_value