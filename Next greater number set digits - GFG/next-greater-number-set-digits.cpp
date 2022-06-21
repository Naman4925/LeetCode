// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    int findNext (int N) 
    {
        //code here.
        string str=to_string(N);
        if(!next_permutation(str.begin(),str.end()))
           return -1;
        return stoi(str);
    }  
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n; cin >> n;
		Solution ob;
		int res = ob.findNext (n);
		if (res == -1)
		    cout << "not possible";
		else
		    cout << res;
		cout << endl; 
	}
}  // } Driver Code Ends