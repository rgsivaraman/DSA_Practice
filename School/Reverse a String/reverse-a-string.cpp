//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string revStr(string S) {
     int n=S.size(); 
     int left=0,right=n-1;
     char temp=' ';
     while(left<right){
      temp=S[left];
      S[left]=S[right];
      S[right]=temp;
      left++;
      right--;
    }
    return S;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.revStr(S) << endl;
    }
    return 0;
}

// } Driver Code Ends