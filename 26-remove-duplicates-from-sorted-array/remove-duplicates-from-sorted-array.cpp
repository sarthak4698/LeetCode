class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int temp = nums[0];
        vector<int> arr;
        arr.push_back(nums[0]);
        for(int i =1 ; i<nums.size() ;i++)
        {
                if(temp != nums[i])
                {
                    arr.push_back(nums[i]);
                    temp = nums[i];


                }
        }
        
        nums=arr;
        return arr.size();
        
    }
};