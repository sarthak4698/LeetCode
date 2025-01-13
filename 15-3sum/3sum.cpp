class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end()) ;
        vector<vector<int>> result;
        map <vector<int>,bool > flag;
        
        int n = nums.size();

        for(int i =0; i<n; i++)
        {
            
         
            int left = i+1;
            int right = n-1;

            while (left < right)
            {
                   int sum = nums[left] + nums[right] + nums[i];

                if(sum ==0)
                {
                    vector<int >temp = {nums[i], nums[left], nums[right]};
                    if(flag[temp]== false)
                    {
                         result.push_back({nums[i],nums[left],nums[right]});
                        flag[temp ]= true ;


                    }
                   left ++;
                   right --;
                   

                }
                else if (sum<0)
                {
                    left ++;

                }
                else 
                {
                    right --;

                }
            }
        

        }
return result;
    }
};