class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        int n = nums.size();
        
        if(nums.size()==1 )
        {
            return;
        }
        k=k%n;
        vector<int> lux;
        for(int i=n-k ; i<n;i++)
        {
            lux.push_back(nums[i]);
        }
        for(int i=0 ;i<n-k;i++)
        {
            lux.push_back(nums[i]);
        }
        nums=lux;

    }
    
};