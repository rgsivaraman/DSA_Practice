//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    string reverse(string str)
    { 
        int n=str.size();
        vector<char> v;
        int i=0;
        int j=n-1;
        while(i<j){
            if(!isalpha(str[i])){
                i++;
            }
            else if(!isalpha(str[j])){
                j--;
            }
            else{
                swap(str[i],str[j]);
                i++;
                j--;
            }
        }
        return str;
    } 
};

//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout <<ob.reverse(s) << endl;
    
cout << "~" << "\n";
}
return 0;
}


// } Driver Code Ends