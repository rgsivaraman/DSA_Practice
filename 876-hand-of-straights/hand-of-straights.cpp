class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        bool res;
        int n=hand.size();
        map<int,int> mp;

        if(n%groupSize!=0){
            return false;
        }
        
        for(auto it:hand){
            mp[it]++;
        }

        for(auto[it,freq]:mp){
            while(freq--){
                for(int curr=it;curr<it+groupSize;curr++){
                    if(mp[curr]==0) return false;
                    mp[curr]--;
                }
            }
        }
        
        return true;
        
    }
};