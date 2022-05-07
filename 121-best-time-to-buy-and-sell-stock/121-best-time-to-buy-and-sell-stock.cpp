/*class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=INT_MAX,result=0,op=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<min){
                min=prices[i];
            }
        
        result=prices[i]-min;
            if(op<result){
                op=result;
            }
        }
        return min;
    }
};

*/

class Solution { 
public:
    int maxProfit(vector<int>& prices) {
        int sum;
        int res=0;
        for(int i=0;i<prices.size();i++)
        {
            for(int j=i+1;j<prices.size();j++)
            {
                if(prices[i]<prices[j])
                {
                    sum=prices[j]-prices[i];
                }
                else
                {
                    break;
                }
                res= max(sum,res);
                
            }
        }
        return res;
        
    }
};
