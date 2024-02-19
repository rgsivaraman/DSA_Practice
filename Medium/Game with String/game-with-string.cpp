//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        int n=s.length();
        unordered_map<char,int> freq;
        for(int i=0;i<n;i++){
            freq[s[i]]++;
        }
        priority_queue<int> q;
        for(auto it:freq){
            q.push(it.second);
        }
        while(k>0){
            int top=q.top();
            q.pop();
            q.push(top-1);
            k--;
        }
        int sum=0;
        while(!q.empty()){
            int top=q.top();
            q.pop();
            sum=sum+pow(top,2);
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends