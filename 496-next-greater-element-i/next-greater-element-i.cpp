class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int> result(n1,-1);
        unordered_map<int,int> mp;
        stack<int> stk;
        for(int num:nums2){
            while(!stk.empty() && stk.top()<num){
                mp[stk.top()]=num;
                stk.pop();
            }
            stk.push(num);
        }

        for(int i=0;i<n1;i++){
            if(mp[nums1[i]]){
                result[i]=mp[nums1[i]];
            }
        }
        return result;

    }
};