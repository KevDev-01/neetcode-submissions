class Solution {
public:
    vector<int> quad;
    vector<vector<int>> res;

    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if (nums.size() < 4) return {};
        sort(nums.begin(), nums.end());

        kSum(4, nums, 0, (long long) target);

        return res;
    }

private:
    void kSum (int k, vector<int>& nums, int start, long long target){
        if (k == 2){
            int l = start, r = nums.size() - 1;
            while(l < r){
                long long sum = nums[l] + nums[r];
                if(sum == target){
                    quad.push_back(nums[l]);
                    quad.push_back(nums[r]);
                    res.push_back(quad);
                    quad.pop_back();
                    quad.pop_back();
                    l++;
                    r--;
                    while(l < r && nums[l] == nums[l - 1]) l++;
                    while(l < r && nums[r] == nums[r + 1]) r--;
                }else if(sum < target){
                    l++;
                }else{
                    r--;
                }
            }
            return;
        }

        for (int i = start; i < nums.size() - k + 1; i++){
            if (i > start && nums[i] == nums[i - 1]) continue;
            quad.push_back(nums[i]);
            kSum(k - 1, nums, i + 1, target - nums[i]);
            quad.pop_back();
        }
    }
};