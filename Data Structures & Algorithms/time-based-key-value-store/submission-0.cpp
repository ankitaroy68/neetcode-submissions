class TimeMap {
public:
    unordered_map<string, vector<pair<int, string>>> mp;
    TimeMap() {}
    
    void set(string key, string value, int timestamp) {
        mp[key].emplace_back(timestamp, value);
    }
    
    string get(string key, int timestamp) {
        string res = "";
        auto& values = mp[key];
        int l=0, r=values.size()-1;
        while(l<=r){
            int m = l+(r-l)/2;
            if(values[m].first<=timestamp){
                res = values[m].second;
                l=m+1;
            }
            else r=m-1;
        }
        return res;
    }
};
