class Solution(object):
    def rearrangeArray(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        n = len(nums)
        pos_index =0
        neg_index=1
        result =[0]*n

        for i in range (0,n):
            if nums[i]>=0:

                result[pos_index]=nums[i]
                pos_index+=2
            
            else:
                result[neg_index]=nums[i]
                neg_index+=2
            
        return result
