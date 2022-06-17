// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    /*int atoi(string str) {
        //Your code here
        int res=0;
        int i=0;
        int sign=1;
        if(str[i]=='-'){
            sign=-1;
        }
        for(int i=0;i<str.size();i++){
            if(!(str[i]-'0'>0 && str[i]-'0'<9))
               return -1;
            else
            res=res*10+str[i]-'0';
        }
        return res*sign;
        
    }*/
    int atoi(string str)
{
    //Your code here
    int result=0;   //Stores and returns the integer converted value for str
    int i=0;    //just a current character pointer for string
    int sign = 1;   //multiplied at the end to result to determine if the string is +ve or -ve
    if(str[i]=='-') //Check the sign of string (+ or -)
    {
        sign = -1;
        i++;
    }
    //Now traverse the entire string and convert it into integer
    while(str[i])
    {
        //If any character is not an integer then just return -1
        if(!(str[i]-'0'>=0 && str[i]-'0'<=9))
            return -1;
        //else just keep updating the result
        result = result*10 + str[i]-'0';
        i++;
    }
    return result*sign;
}
};




// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends