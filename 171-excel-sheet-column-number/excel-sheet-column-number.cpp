class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result=0;
        int n=columnTitle.size();
        for(char i:columnTitle){
            int ch=i-'A'+1;
            result=result*26+ch;
        }
        return result;
    }
};