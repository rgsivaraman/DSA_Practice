class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> mp;
        int count=0;
        for(auto it:arr){
            mp[it]++;
        }
        for(auto it:arr){
            if(mp[it]==1){
                count++;
                if(count>=k){
                    return it;
                }
            }
        }
        return "";
    }
};