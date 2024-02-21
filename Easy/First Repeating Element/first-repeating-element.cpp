//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        unordered_map<int, int> mp;
        int x = -1; // Initialize x to -1 to indicate no repeating element found

        for (int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }

        for (int i = 0; i < n; i++) {
            if (mp[arr[i]] >= 2) {
                x = arr[i];
                break; // Break as soon as the first repeating element is found
            }
        }

        for (int i = 0; i < n; i++) {
            if (arr[i] == x) {
                return i + 1; // Return 1-based index
            }
        }

        return -1; // Return -1 if no repeating element is found
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; ++i) cin >> arr[i];
        Solution ob;
        cout << ob.firstRepeated(arr, n) << "\n";
    }

    return 0;
}

// } Driver Code Ends