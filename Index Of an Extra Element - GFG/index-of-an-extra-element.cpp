// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    int findExtra(int a[], int b[], int n) {
        // add code here.
        //1st method
        /*for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(a[i]==b[j]){
                    i++;
                }
            }
            return i;
        }*/
        
        //2nd method
        int sum1=0,sum2=0;
        for(int i=0;i<n;i++){
            sum1+=a[i];
        }
        for(int i=0;i<n-1;i++){
            sum2+=b[i];
        }
        int diff=sum1-sum2;
        for(int i=0;i<n;i++){
            if(a[i]==diff)
               return i;
        }
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n - 1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }
        Solution obj;
        cout << obj.findExtra(a, b, n) << endl;
    }
}  // } Driver Code Ends