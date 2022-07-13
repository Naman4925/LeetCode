// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends


string isSubset(int a1[], int a2[], int n, int m) {
   /* int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a1[i]==a2[j])
            count++;
        }
    }
    if(count==m)
       return "Yes";
    else
       return "No";*/
       
    map<int,int>mp1;
    map<int,int>mp2;
    for(int i=0;i<n;i++){
        mp1[a1[i]]++;
    }
    for(int i=0;i<m;i++){
        mp2[a2[i]]++;
    }
    for(int i=0;i<m;i++){
        if(mp1[a2[i]]<mp2[a2[i]]){
            return "No";
        }
    }
    return "Yes";
}