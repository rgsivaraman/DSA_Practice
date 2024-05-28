//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void solve(vector<int>& arr,vector<int>& ans,int n,int i,int sum){
        if(i==arr.size()){
            ans.push_back(sum);
            return;
        }
        solve(arr,ans,n,i+1,sum+arr[i]);
        solve(arr,ans,n,i+1,sum);
        
    }
    vector<int> subsetSums(vector<int> arr, int n) {
        vector<int> ans;
        int sum=0;
        solve(arr,ans,n,0,sum);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr, N);
        sort(ans.begin(), ans.end());
        for (auto sum : ans) {
            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends