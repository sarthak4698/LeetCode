class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> lux;
        int n = nums.size();
        for(int i=0; i<n ; i++)
        {
            for(int j=i+1; j<n ; j++)
            {
                    if( i == j)
                    {
                       continue;
                    }
                    if(nums[i] + nums[j] == target)
                    {
                        return{i,j};
                    }
            }
            
        }
        return {};
       
    }
   
};