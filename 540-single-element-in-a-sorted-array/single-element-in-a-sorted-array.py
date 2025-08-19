class Solution(object):
    def singleNonDuplicate(self, nums):
        n = len(nums)

        for i in range(0, n-1, 2):   # step 2, so pairs (0,1), (2,3), etc.
            if nums[i] != nums[i+1]:
                return nums[i]

        return nums[-1]   # if loop didn’t return, last element is the answer
