//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string sort(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << sort(s) << endl;
    }
return 0;
}




// } Driver Code Ends


string sort(string s){
    vector<int> arr(26 , 0);
    for(int i=0;i<s.size();i++){
        arr[s[i]-'a']++;
    }
    string ans="";
    for(int i=0;i<26;i++){
        char ch='a'+i;
        while(arr[i]){
            ans+=ch;
            arr[i]--;
        }
    }
    return ans;
}