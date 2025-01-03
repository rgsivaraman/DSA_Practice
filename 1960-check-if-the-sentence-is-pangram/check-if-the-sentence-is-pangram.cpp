class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n=sentence.size();
        int x=26;
        if(n<x) return false;
        vector<int> flags(x);
        for(char c:sentence){
            flags[(c-'a')]++;
        }
        for(int i:flags){
            if(i==0) return false;
        }
        return true;
    }
};