//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    // Function to convert the given string to Camel Case
    string convertToCamelCase(string& s) {
        string result;
        bool capitalizeNext = false;
        for (char c : s) {
            if (c == ' ') {
                capitalizeNext = true;
            } else {
                if (capitalizeNext) {
                    result += toupper(c);
                    capitalizeNext = false;
                } else {
                    result += c;
                }
            }
        }
        return result;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;     // Read the number of test cases
    cin.ignore(); // Consume the newline character after reading the integer

    while (t--) {
        string s;
        getline(cin, s); // Read the string input

        string str = s.substr(1, s.size() - 2); // Remove surrounding quotes
        Solution obj; // Create an object of the Solution class
        string ans = obj.convertToCamelCase(str); // Convert the string to Camel Case
        cout << '"';                              // Print opening quote
        cout << ans;                              // Print the result
        cout << '"';                              // Print closing quote
        cout << endl;                             // Print a newline
    }
    return 0; // Return 0 to indicate successful execution
}

// } Driver Code Ends