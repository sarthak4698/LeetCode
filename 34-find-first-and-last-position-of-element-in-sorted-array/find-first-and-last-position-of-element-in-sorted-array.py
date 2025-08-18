class Solution(object):
    def searchRange(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        n = len(nums)
        first =-1
        second =-1
        for i in range(n):
            if nums[i]== target:
                if first ==-1:
                    first =i
                
                second =i
        
        return [first , second]