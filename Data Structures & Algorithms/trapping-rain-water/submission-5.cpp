class Solution {
public:
    int trap(vector<int>& height) {
        int i = 0, j = height.size() - 1, l = height[i], r = height[j], cnt = 0;

        while(i < j - 1){
            if(l < r){
                i++;
                cnt += max(0, l - height[i]);
                l = max(l, height[i]);
            }else{
                j--;
                cnt += max(0, r - height[j]);
                r = max(r, height[j]);
            }
        }
        
        return cnt;
    }
};
