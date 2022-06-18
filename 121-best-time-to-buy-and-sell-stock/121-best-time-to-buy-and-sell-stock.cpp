class Solution {
public:
    int maxProfit(vector<int>& prices) {
       /* int pos,min=INT_MAX,max=INT_MIN,sum=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min){
                min=prices[i];
                pos=i;
            }
        }
        for(int i=pos;i<prices.size();i++){
            if(prices[i]>max){
                max=prices[i];
            }
        }
        if(min==prices.size()-1)
            return 0;
        else
            return sum=max-min;*/
        
        
        int mi=INT_MAX;
        int profit=0;
        for(int i=0;i<prices.size();i++){
            mi=min(mi,prices[i]);
            profit=max(profit,prices[i]-mi);
        }
        return profit;
    }
};