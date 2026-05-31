class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int i,res=0;
        vector<int> ps(nums.size()+1,0);
        for(i=1;i<=nums.size();i++){
            ps[i]=ps[i-1]+nums[i-1];
        }
        mp[0]++;
        for(i=1;i<=nums.size();i++){
            if(mp.find(ps[i]-k)!=mp.end()){
                res+=mp[ps[i]-k];
            }
            mp[ps[i]]++;
        }
        return res; 
    }
};