class Solution {
public:
    bool detectCapitalUse(string word) {
        int upper=0,lower=0;
        int n=word.size();
        for(int i=0;i<n;i++){
            if(isupper(word[i])){
                upper++;
            }
            else if(islower(word[i])){
                lower++;
            }
        }
        if(upper==n) return true;
        if(lower==n) return true;
        if(upper==1 && lower==n-1 && isupper(word[0])) return true;
        return false;
    }
};