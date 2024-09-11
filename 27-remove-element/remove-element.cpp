class Solution 
{
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int count =0;
        vector<int> lux;

        for(int i=0 ; i < nums.size();i++)
        {
            if(nums[i] != val)
            {
                lux.push_back(nums[i]);
            
                count++;

            }

            

            

        }
        cout<<count<<endl;
        nums=lux;
        
        return count;

    }
};