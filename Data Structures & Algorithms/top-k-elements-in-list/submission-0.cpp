class Solution {
public:
    struct cmp {
        bool operator()(const pair<int,int>& a, const pair<int,int>& b) const {
            return a.second < b.second; 
        }
    };  

    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        priority_queue<pair<int,int>,vector<pair<int,int>>,cmp> pq;
        for(const auto &x:nums){
            mp[x]++;
        }
        for(const auto& x:mp){
            pq.push(x);
        }

        vector<int> v(k);
        for(auto& x:v){
            x=pq.top().first;
            pq.pop();
        }

        return v;
    }
};
