class Solution {
public:
    int appendCharacters(string s, string t) {
        int n=s.size();
        int m=t.size();
        int start1=0;
        int start2=0;
        while(start1<n && start2<m){
            if(s[start1]==t[start2]){
                start2++;
            }
            start1++;
        }
        return m-start2;
    }
};