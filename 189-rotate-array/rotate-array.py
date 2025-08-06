class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n = len(nums)
        k =k % n

        def spm(start:int , end:int )->None:
            while start<end:
                nums[start] , nums[end]=nums[end],nums[start]
                
                start+=1
                end-=1

        spm(0,n-1)
        spm(0,k-1)
        spm(k , n-1)        