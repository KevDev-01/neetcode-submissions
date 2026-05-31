class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int i,n=nums.size();
        vector<int> res(n,1);
        for(i=0;i<n;i++){
            res[i]=nums[i];
            if(i>0){
                res[i]*=res[i-1];
            }
        }
        int postfix=1;
        for(i=n-1;i>0;i--){
            res[i]=res[i-1]*postfix;
            postfix*=nums[i];
        }
        res[0]=postfix;
        return res;
    }
};
 