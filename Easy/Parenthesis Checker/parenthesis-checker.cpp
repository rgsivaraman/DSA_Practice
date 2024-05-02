//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        int open = 0;
    std::stack<char> st;
    int n = x.size();
    for (int i = 0; i < n; i++) {
        if (x[i] == '(' || x[i] == '{' || x[i] == '[') {
            st.push(x[i]);
            open++;
        } else if (x[i] == ')' || x[i] == '}' || x[i] == ']') {
            if (st.empty()) {
                // If the stack is empty, there's no matching open bracket
                return false;
            }
            char top = st.top();
            if ((top == '(' && x[i] == ')') || (top == '{' && x[i] == '}') || (top == '[' && x[i] == ']')) {
                st.pop();
                open--;
            } else {
                // If the top of the stack does not match the closing bracket, the expression is not balanced
                return false;
            }
        }
    }
    // If the stack is not empty, there are unmatched open brackets
    return open == 0;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends