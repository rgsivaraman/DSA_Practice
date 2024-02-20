//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int countSubstr (string S)
	{
	    int sum=0;
	    int left=0;
	    for(int i=0;i<S.length();i++){
	        if(S[i]=='1'){
	            sum+=1;
	        }
	    }
	   if(sum>=2){
	            return (sum*(sum-1)/2);
	   }
	   else{
	            return 0;
	   }
	}
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        
        cout << ob.countSubstr (s) << '\n';
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends