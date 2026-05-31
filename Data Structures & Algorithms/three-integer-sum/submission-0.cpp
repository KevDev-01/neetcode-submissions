class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<set<int>> st;

        vector<vector<int>> sol(0);

        for (int i = 0; i < nums.size(); i++){
            int l = i + 1, r = nums.size() - 1;
            while(l < r){
                if(-1 * nums[i] == nums[l] + nums[r]){
                    if(!st.count({nums[i], nums[l], nums[r]})){
                        sol.push_back(vector<int>{nums[i], nums[l], nums[r]});
                        st.insert({nums[i], nums[l], nums[r]});
                    }
                    l++;
                    r--;
                }else if(-1 * nums[i] > nums[l] + nums[r]){
                    l++;
                }else{
                    r--;
                }
            }
        }

        return sol;
    }
};
