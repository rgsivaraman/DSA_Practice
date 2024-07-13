class RandomizedSet {
    vector<int> nums;
    unordered_map<int,int> indmap;

public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(indmap.find(val)!=indmap.end()) return false;
        nums.push_back(val);
        indmap[val]=nums.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(indmap.find(val)==indmap.end()) return false;
        int last=nums[nums.size()-1];
        indmap[last]=indmap[val];
        nums[indmap[last]]=last;
        nums.pop_back();
        indmap.erase(val);
        return true;
    }
    
    int getRandom() {
        return nums[rand()%nums.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */