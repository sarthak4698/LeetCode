class Solution(object):
    def maxSubArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        maxSum =nums[0]
        currentSum = nums[0]
        for num in nums[1:]:
            currentSum = max(num ,currentSum+num)
            maxSum = max(maxSum , currentSum)

        return maxSum