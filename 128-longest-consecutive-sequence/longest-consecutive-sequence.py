class Solution(object):
    def longestConsecutive(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n=len(nums)

        if not nums:
            return 0

        nums.sort()
        longest=1
        current =1

        for i in range (1,n):
            if nums[i]==nums[i-1]:
                continue
            
            elif nums[i]== nums[i-1]+1:
                current +=1
                longest = max(longest ,current)

            else:
                current =1
        
        return longest