//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}
// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

void inserta(stack<int>& s,int t){
    if(s.empty() || s.top()<=t){
        s.push(t);
        return;
    }
    int topnew=s.top();
    s.pop();
    inserta(s,t);
    s.push(topnew);
}


void SortedStack :: sort()
{
   if(s.empty()) return;
   int t=s.top();
   s.pop();
   sort();
   inserta(s,t);
}