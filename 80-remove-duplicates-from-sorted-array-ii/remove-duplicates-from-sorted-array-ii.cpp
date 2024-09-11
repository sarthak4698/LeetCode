class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0 )
        {
            return 0;

        }
        int count=0;

        int temp=nums[0];
        vector<int> arr;
        arr.push_back(nums[0]);
        count = 1;

        for(int i=1 ; i<nums.size(); i++)
        {
            if( temp==nums[i] && count<2)
            {
                arr.push_back(nums[i]);
                count++;
            }
            if(temp!=nums[i] )
            {
                arr.push_back(nums[i]);
                temp=nums[i];
                count =1;
                

                
            }
        
        }
        
        nums = arr;
        return arr.size();

    }
};