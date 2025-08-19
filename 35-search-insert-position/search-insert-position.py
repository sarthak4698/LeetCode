class Solution(object):
    def searchInsert(self, nums, target):
        n = len(nums)-1
        print (n)

        for i in range(n+1):
            if nums[i]>=target:
                return i
        
        return n+1