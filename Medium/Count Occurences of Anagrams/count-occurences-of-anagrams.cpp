//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
    bool allZero(vector<int>& counter){
        for(int i=0;i<counter.size();i++){
            if(counter[i]!=0){
                return false;
            }
        }
        return true;
    }
	int search(string pat, string txt) {
	    vector<int> counter(26);
	    int n=txt.size();
	    int k=pat.size();
	    
	    for(int i=0;i<k;i++){
	        char ch=pat[i];
	        counter[ch-'a']++;
	    }
	    
	    //pointers
	    int i=0,j=0;
	    int result=0;
	    
	    while(j<n){
	        counter[txt[j]-'a']--;
	        if(j-i+1==k){
	            if(allZero(counter)){
	                result++;
	            }
	            counter[txt[i]-'a']++;
	            i++;
	        }
	        j++;
	    }
	    return result;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends