class Solution {
public:
    string removeDuplicates(string s) {
        string s2="";
        for(int i=0;i<s.size();i++){
            if(s2.size()>0 && s[i]==s2[s2.size()-1]){
                s2.pop_back();
            }
            else{
            s2.push_back(s[i]);
            }
        }
        return s2;
    }
};