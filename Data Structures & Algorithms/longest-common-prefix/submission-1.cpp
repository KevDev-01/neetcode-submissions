class Solution {

public:
    static bool cmp(string &a, string &b){
        return a.length() < b.length();
    }

    string longestCommonPrefix(vector<string>& strs) {
        int i,j;
        string s="";
        sort(strs.begin(),strs.end(),cmp);
        for(i=0;i<strs[0].length();i++){
            char c = strs[0][i];
            for(j=1;j<strs.size();j++){
                if(strs[j][i]!=c){
                    return s;
                }
            }
            s+=c;
        }
        return s;
    }
};