class Solution {
public:
    static void merge(vector<int> &v, int l, int m, int r){
        vector<int> left(v.begin()+l,v.begin()+m+1);
        vector<int> right(v.begin()+m+1,v.begin()+r+1);
        int i=0,j=0,k=l;
        while(i<left.size()&&j<right.size()){
            if(left[i]<right[j]){
                v[k++]=left[i++];
            }else{
                v[k++]=right[j++];
            }
        }
        while(i<left.size()){
            v[k++]=left[i++];
        }
        while(j<right.size()){
            v[k++]=right[j++];
        }
    }

    static void mergeSort(vector<int>& v, int l, int r){
        if(l>=r){
            return;
        }
        int m=(l+r)/2;
        mergeSort(v,l,m);
        mergeSort(v,m+1,r);
        merge(v, l, m, r);
    }

    vector<int> sortArray(vector<int>& nums) {
        if(nums.size()==1){
            return nums;
        }
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
};