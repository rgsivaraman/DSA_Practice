class Solution {
public:
    bool rotateString(string s, string goal) {
        // If lengths are different, rotation is impossible
        if (s.length() != goal.length()) 
            return false;
        
        // If strings are same, no rotation needed
        if (s == goal) 
            return true;
            
        // Check all possible rotations
        for (int i = 0; i < s.length(); i++) {
            // Perform one rotation - move first char to end
            char first = s[0];
            s = s.substr(1) + first;
            
            // Check if rotated string matches goal
            if (s == goal) 
                return true;
        }
        return false;
    }
};