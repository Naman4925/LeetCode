class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int diff=0;
        // int maxx=INT_MIN;
        // if(prices.size()==1)
        //     return 0;
        // for(int i=0;i<prices.size()-1;i++){
        //     for(int j=i+1;j<prices.size();j++){
        //         diff=prices[j]-prices[i];
        //         maxx=max(maxx,diff);
        //     }
        // }
        // if(maxx==-1){
        //     maxx=0;
        // }
        // return maxx;
        int mi=INT_MAX;
        int profit=0;
        for(int i=0;i<prices.size();i++){
            mi=min(mi,prices[i]);
            profit=max(profit,prices[i]-mi);
        }
        return profit;
    }
};