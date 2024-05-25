class Solution {
public:
    void recur(int n, int open, int close, string s, vector<string>& ans) {
        if (s.size() == 2 * n && open == close) {
            ans.push_back(s);
            return;
        }
        if (open < n) {
            recur(n, open + 1, close, s + '(', ans);
        }

        if (open > close) {
            recur(n, open, close + 1, s + ')', ans);
        }
    }

    vector<string> generateParenthesis(int n) {
        int open = 0;
        int close = 0;
        vector<string> ans;
        string s = "";  // Initialize s as an empty string
        recur(n, open, close, s, ans);
        return ans;
    }
};