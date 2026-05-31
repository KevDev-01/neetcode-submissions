class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_set<int> s;
        vector<int> v;
        for(const auto&x:nums){
            if(s.count(x)){
                continue;
            }
            s.insert(x);
            v.push_back(x);
        }
        nums=v;
        return s.size();
    }
};