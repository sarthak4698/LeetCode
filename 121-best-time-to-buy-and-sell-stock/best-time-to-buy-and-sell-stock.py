class Solution(object):
    def maxProfit(self, prices):
        left=0
        right=1
        maxprofit=0
        while right<len(prices):
            curprofit = prices[right]-prices[left]
            if prices[left]<prices[right]:
                maxprofit=max(maxprofit, curprofit)

            else:
                left =right
            
            right+=1
        
        return maxprofit
