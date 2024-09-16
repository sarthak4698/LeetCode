class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> lux;
        int count =0;
        int n = nums.size();
        for(int i =0 ; i < n;i++)
        {
            if(nums[i]!= val)
            {
                lux.push_back(nums[i]);
                count++;

            }
        }
        nums = lux;
        return count;
        
    }
};