//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    
    void recur(vector<string>& ans,string S,int i){
        if(i==S.length()-1){
            ans.push_back(S);
            return;
        }
        
        for(int j=i;j<S.length();j++){
            swap(S[i],S[j]);
            recur(ans,S,i+1);
            swap(S[i],S[j]);
        }
    }
    
    vector<string> permutation(string S)
    {
        vector<string> ans;
        recur(ans,S,0);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends