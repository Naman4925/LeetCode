class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        sort(candyType.begin(),candyType.end());
        int dcount=1,tcount=0;
        int n=candyType.size();
        for(int i=0;i<n-1;i++){
            if(candyType[i]==candyType[i+1]){
                continue;
            }
            else{
                dcount++;
            }
        }
        //cout<<tcount<<dcount<<n;
        int total=n/2;
        int ans;
        if(total==dcount){
            ans= dcount;
        }
        else if(total>dcount){
            ans=dcount;
        }
        else{
            ans=total;
        }
        return ans;
    }
};