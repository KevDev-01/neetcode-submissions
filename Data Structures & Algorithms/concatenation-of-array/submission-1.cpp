class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> v(nums.size()*2);
        for(int i=0;i<v.size();i++){
            v[i]=nums[i%nums.size()];
        }
        return v;
    }
};