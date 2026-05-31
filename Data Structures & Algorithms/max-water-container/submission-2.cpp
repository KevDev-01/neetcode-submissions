class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0, r = heights.size() - 1;
        int maxn = 0;
        while(l < r){
            maxn = max(min(heights[l], heights[r]) * (r - l), maxn);
            if(heights[l] < heights[r]){
                l++;
            }else{
                r--;
            }
        }
        return maxn;
    }
};
