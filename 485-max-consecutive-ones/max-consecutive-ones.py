class Solution(object):
    def findMaxConsecutiveOnes(self, nums):
       
        count = 0
        max_count = 0
        n = len(nums)

        for i in range(n):
            if nums[i]==1:
                count+=1
            else:
                count =0
            max_count = max(count , max_count)
        
        return max_count


