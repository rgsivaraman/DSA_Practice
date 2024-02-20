class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        priority_queue<pair<int,char>> q;
        string s1="";
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        for(auto it:mp){
            q.push({it.second, it.first});
        }
        while(!q.empty()){
            auto current=q.top();
            q.pop();
            s1+=string(current.first,current.second);
        }
        return s1;
    }
};