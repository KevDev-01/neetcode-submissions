class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> maxl(height.size()), maxr(height.size());
        
        int maxn = height[0];
        for(int i = 0; i < height.size(); i++){
            maxl[i] = maxn;
            maxn = max(maxn, height[i]);
        }

        maxn = height.back();
        for(int i = height.size() - 1; i >= 0; i--){
            maxr[i] = maxn;
            maxn = max(maxn, height[i]);
        }

        int cnt = 0;

        for(int i = 0; i < height.size(); i++){
            // if(maxl[i] && maxr[i]){
                cnt += max(0, min(maxl[i], maxr[i]) - height[i]);
            // }
        }

        return cnt;
    }
};
