class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i,cnt1=0,cnt2=0,cnt0=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                cnt1++;
            }else if (nums[i]==2){
                cnt2++;
            }else{
                cnt0++;
            }
        }
        int k=0;
        while(k<nums.size()&&cnt0){
            nums[k++]=0;
            cnt0--;
        }
        while(k<nums.size()&&cnt1){
            nums[k++]=1;
            cnt1--;
        }
        while(k<nums.size()&&cnt2){
            nums[k++]=2;
            cnt2--;
        }
    }
};