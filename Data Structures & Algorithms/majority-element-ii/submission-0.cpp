class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_set<int> res;
        unordered_map<int,int> mp;
        for(const auto &x:nums){
            if(res.count(x)) continue;
            mp[x]++;
            if(mp[x]>nums.size()/3){
                res.insert(x);
            }
        }
        return vector<int> (res.begin(),res.end());
    }
};