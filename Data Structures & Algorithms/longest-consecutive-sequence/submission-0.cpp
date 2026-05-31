class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> num;
        unordered_set<int> nonprev;
        int cnt=0;
        for(const auto &x:nums){
            num.insert(x);
        }
        for(const auto &x:num){
            if(num.count(x-1)) continue;
            nonprev.insert(x);
        }
        for(const auto &x:nonprev){
            int t=1;
            int start=x;
            while(true){
                if(num.count(start+1)){
                    start++;
                    t++;
                    continue;
                }
                break;
            }
            cnt=max(cnt,t);
        }
        return cnt;
    }
};
