//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int max_sum(int A[],int N);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }

        cout<<max_sum(A,N)<<endl;
        /*keeping track of the total sum of the array*/

    }
}

// } Driver Code Ends


/*You are required to complete this method*/
int max_sum(int A[],int N)
{
//Your code here
    int sum=0;
    int curr_val;
     for(int i=0;i<N;i++){
         sum+=A[i];
         curr_val+=A[i]*i;
     }
     int max_val=curr_val;
     for(int i=N-1;i>=0;i--){
         curr_val=curr_val+sum-(N*A[i]);
         max_val=max(max_val,curr_val);
     }
     
     return max_val;
}