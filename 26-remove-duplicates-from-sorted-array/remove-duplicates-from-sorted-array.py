class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        n = len(nums)
        if n ==0:
            return 0

        k=1

        for i in range (1 ,n):
            if (nums[i]!=nums[k-1]):
                nums[k]=nums[i]
                k+=1

        return k