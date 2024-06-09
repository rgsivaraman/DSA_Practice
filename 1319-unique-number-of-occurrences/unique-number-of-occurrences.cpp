class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mp;
        map<int,int> mp1;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }

        for(auto it:mp){
            mp1[it.second]++;
        }

        for(auto count:mp1){
            if(count.second>1){
                return false;
            }
        }
        return true;
    }
};