class Solution {
public:
    double myPow(double x, int n) {
        double total=0;
        // long long int pos;
        // if(n>0){
        //     total=pow(x,n);
        // }
        // else if(n<0){
        //     pos=n*-1;
        //     total=1/pow(x,pos);
        // }
        // else{
        //     total=1;
        // }
        total=pow(x,n);
        return total;
    }
};