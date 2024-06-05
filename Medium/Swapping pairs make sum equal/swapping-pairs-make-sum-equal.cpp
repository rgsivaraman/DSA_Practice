//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
    int findSwapValues(int a[], int n, int b[], int m) {
        unordered_map<int,int> mp;
        int sum1=0;
        int sum2=0;
        for(int i=0;i<n;i++){
            sum1=sum1+a[i];
        }
        for(int i=0;i<m;i++){
            sum2=sum2+b[i];
        }
        sort(a,a+n);
        sort(b,b+m);
        int i=0,j=0;
        while(i<n && j<m){
            int val=sum1-(a[i])+b[j];
            int val2=sum2-(b[j])+a[i];
            if(val==val2){
                return 1;
            }
            if(val>val2){
                i++;
            }
            else{
                j++;
            }
        }
        return -1;
        
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n];
        int b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        Solution ob;
        cout << ob.findSwapValues(a, n, b, m);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends