//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findExtra(vector<int>& a, vector<int>& b) {
        int n=a.size();
        int m=b.size();
        unordered_map<int,int> mp;
        if(n<m){
           for(int i=0;i<n;i++){
               mp[a[i]]++;
           }
           for(int i=0;i<m;i++){
               if(mp.find(b[i])==mp.end()){
                   return i;
               }
           }
        }
        else{
            for(int i=0;i<m;i++){
               mp[b[i]]++;
           }
           for(int i=0;i<n;i++){
               if(mp.find(a[i])==mp.end()){
                   return i;
               }
           }
        }
        return -1;

    }
};

//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr1, arr2;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr1.push_back(number);
        }

        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr2.push_back(number1);
        }

        Solution ob;
        int ans = ob.findExtra(arr1, arr2);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends