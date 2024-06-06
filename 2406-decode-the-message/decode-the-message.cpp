class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,char> mp;
        char space=' '; //handling space characters
        mp[space]=space;
        int start='a';
        int index=0;
        while(index<key.length() && start<='z'){
            char keycurr=key[index];
            if(mp.find(keycurr)!=mp.end()){
                index++;
            }
            else{
                mp[keycurr]=start;
                start++;
                index++;
            }
        }

        string ans="";
        for(int i=0;i<message.length();i++){
            char msg=message[i];
            char mapchar=mp[msg];
            ans.push_back(mapchar);
        }
        return ans;
    }
};