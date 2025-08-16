class Solution(object):
    def maxProfit(self, prices):
        left =0
        right =1
        n = len(prices)
        max_profit=0
        while right <n:
            current_profit = prices[right]-prices[left]
            if prices[left]<prices[right]:
                max_profit= max (current_profit , max_profit)
            
            else:
                left = right 
            
            right +=1
        return max_profit