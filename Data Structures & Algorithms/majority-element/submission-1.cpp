class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        for(auto x:nums){
            mp[x]++;
            if(mp[x]>nums.size()/2){
                return x;
            }
        }
    }
};