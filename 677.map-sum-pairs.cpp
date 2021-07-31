/*
 * @lc app=leetcode id=677 lang=cpp
 *
 * [677] Map Sum Pairs
 */

// @lc code=start
class MapSum {
public:
    /** Initialize your data structure here. */
    MapSum() {
        
    }
    
    void insert(string key, int val) {
        int index = key.find('-');
        if (index == string::npos) {
            map[key] = val;

            return;
        }

        string prefix = key.substr(0, index);
        string suffix = key.substr(index + 1);
        if (map.count(prefix) == 0) {
            map[prefix] = 0;
        }
        map[prefix] += val;
        insert(suffix, val);
    }
    
    int sum(string prefix) {
        
        if (map.count(prefix) == 0) {
            return 0;
        }
        return map[prefix];
    }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */
// @lc code=end

