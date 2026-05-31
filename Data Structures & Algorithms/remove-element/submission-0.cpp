class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> v;
        for(auto x:nums){
            if(x==val){
                continue;
            }
            v.emplace_back(x);
        }
        nums=v;
        return v.size();
    }
};