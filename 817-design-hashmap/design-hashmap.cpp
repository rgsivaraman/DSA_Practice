class MyHashMap {
public:
    vector<pair<int,int>> res;
    MyHashMap() {

    }
    
    void put(int key, int value) {
        bool flag=false;
        for(auto& it:res){
            if(it.first==key){
                it.second=value;
                flag=true;
            }
        }
        if(flag==false) res.push_back({key,value});

    }
    
    int get(int key) {
        for(auto it:res){
            if(it.first==key){
                return it.second;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        for(auto it=res.begin();it!=res.end();){
            if(it->first==key){
                it = res.erase(it);
            } else {
                ++it;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */