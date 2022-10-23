class Solution {
public:
    int subtractProductAndSum(int n) {
        int mul=1,sum=0;
        int ans;
        while(n>0){
            //n=n%10;
            //cout<<n<<" ";
            sum+=(n%10);
            mul*=(n%10);
            n=n/10;
        }
        //cout<<sum<<" "<<mul;
        ans=mul-sum;
        return ans;
    }
};