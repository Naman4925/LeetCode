// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
     sort(arr,arr+N);
     int count=1;
     int ma=1;
     for(int i=0;i<N;i++){
         if(arr[i]+1==arr[i+1])
         {
             count++;
         }
         else if(arr[i]==arr[i+1]){
             continue;
         }
         else{
         count=1;
         }
         ma=max(ma,count);
     }
     return ma;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends