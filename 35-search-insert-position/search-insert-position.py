class Solution(object):
    def searchInsert(self, nums, target):
        n = len(nums)

        for i in range(n):
            if nums[i]>=target:
                return i
        
        return n