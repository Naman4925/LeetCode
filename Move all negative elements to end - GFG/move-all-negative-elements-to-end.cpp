//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        vector<int>v1;
        vector<int>v2;
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                v2.push_back(arr[i]);
            }
            else{
                v1.push_back(arr[i]);
            }
        }
        for(int i=0;i<v2.size();i++){
            v1.push_back(v2[i]);
        }
        for(int i=0;i<n;i++){
            arr[i]=v1[i];
        }
        return;
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends