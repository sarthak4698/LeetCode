class Solution(object):
    def missingNumber(self, nums):
        
        cum_sum =0
        n = len(nums)

        for i in range(n):
            cum_sum +=nums[i]
            exp_sum = n*(n+1)//2
            result = exp_sum - cum_sum
        return result