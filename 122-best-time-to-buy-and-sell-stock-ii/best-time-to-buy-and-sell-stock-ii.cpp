class Solution {
public:
    int maxProfit(vector<int>& prices)
    {   
        int high=prices[0], low=prices[0];int profit=0;
        for(int i=1; i<prices.size(); i++) 
        {
            if(high<prices[i])
            {
                    high=prices[i];
            }
            else
            {
                profit=profit+(high-low);
                high=prices[i];
                low=prices[i];
            }

           
        }
        profit=profit+(high-low);
        return profit;
    }
};