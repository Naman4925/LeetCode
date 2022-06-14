// { Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
int isPalindrome(string S)
{ 
    string n,m;
    // Your code goes here
    for(int i=0;i<S.length();i++){
        n+=S[i];
    }
    for(int j=S.length()-1;j>=0;j--){
            m+=S[j];
    }
            if(n==m)
               return 1;
            else
               return 0;
}
};

// { Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}  // } Driver Code Ends