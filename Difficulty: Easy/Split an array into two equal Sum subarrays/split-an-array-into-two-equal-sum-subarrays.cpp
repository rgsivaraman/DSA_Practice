//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        int n=arr.size();
        int i=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        int parsum=0;
        for(int i=n-1;i>=0;i--){
            parsum+=arr[i];
            sum-=arr[i];
            if(parsum==sum){
                return true;
            }
        }
        return false;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t-- > 0) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr;
        string temp;
        while (ss >> temp) {
            arr.push_back(stoi(temp));
        }

        Solution obj;
        bool res = obj.canSplit(arr);
        cout << (res ? "true" : "false") << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends