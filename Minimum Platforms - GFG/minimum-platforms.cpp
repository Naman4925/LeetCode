// { Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	/*int i=0,j=0,count=0;
    	while(i<n && j<n){
    	    if(arr[i+1]<=dep[j])
    	       count++;
    	       i++;
    	       j++;
    	}
    	if(count>0)
    	   return count;
    	return 1;*/
    	
sort(arr,arr+n);
    sort(dep,dep+n);
    int maxi=1;
    int plt=1;
    int i=1,j=0;
    while(i<n && j<n)
    {
        if(arr[i]<=dep[j])
        {
            plt++;
            i++;
        }
        else if(arr[i]>dep[j])
        {
            plt--;
            j++;
        }
        if(plt>maxi)
        {
            maxi=plt;
        }
    }
    return maxi;
    }
};


// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  // } Driver Code Ends