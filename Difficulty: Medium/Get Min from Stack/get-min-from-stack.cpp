//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    stack<int> st;
    stack<int> minstk;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           
           if(st.size()==0){
               return -1;
           }
           return minstk.top();
       }
       
       /*returns poped element from stack*/
       int pop(){
           if(st.size()==0){
               return -1;
           }
           if(minstk.top()==st.top()){
               minstk.pop();
           }
           int x=st.top();
           st.pop();
           return x;
           
       }
       
       /*push element x into the stack*/
       void push(int x){
           if(st.size()==0){
               st.push(x);
               minstk.push(x);
           }
           else{
               if(minstk.top()>=x){
                   minstk.push(x);
               }
               st.push(x);
           }
       }
};

//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              //push
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {
              //pop
              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {
              //getMin
              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends