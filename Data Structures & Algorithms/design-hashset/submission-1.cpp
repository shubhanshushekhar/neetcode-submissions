class MyHashSet {
    vector<bool> vis = vector<bool>(1000005, false);
public:
    MyHashSet() {
        
    }
    
    void add(int key) {
        vis[key] = true;
    }
    
    void remove(int key) {
        vis[key] = false;
    }
    
    bool contains(int key) {
        return vis[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */