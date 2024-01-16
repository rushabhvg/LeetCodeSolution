/*
BY RUSHABH GALA
rushabhvg
GitHub :
https://github.com/rushabhvg
StackOverflow :
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/

static const int _ = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

class LRUCache {
    size_t m_cap;
    unordered_map<int, list<pair<int, int>>::iterator> mp;
    list<pair<int, int>> mlist;
public:
    LRUCache(int capacity) {
        m_cap = capacity;
    }
    
    int get(int key) {
        auto found_itr = mp.find(key);
        if(found_itr == mp.end()) return -1;
        mlist.splice(mlist.begin(), mlist, found_itr->second);
        return found_itr->second->second;
    }
    
    void put(int key, int value) {
        auto found_itr = mp.find(key);
        if(found_itr != mp.end()) {
            mlist.splice(mlist.begin(), mlist, found_itr->second);
            found_itr->second->second = value;
            return;
        }
        if(mp.size()==m_cap) {
            int keyDel = mlist.back().first;
            mlist.pop_back();
            mp.erase(keyDel);
        }
        mlist.emplace_front(key, value);
        mp[key] = mlist.begin();
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

 /*
BY RUSHABH GALA
rushabhvg
GitHub :
https://github.com/rushabhvg
StackOverflow :
https://stackoverflow.com/users/16571212/rushabhvg
LinkedIn:
https://www.linkedin.com/in/rushabhvg/
*/
