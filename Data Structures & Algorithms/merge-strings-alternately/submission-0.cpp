class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        string s="";
        while(i<word1.length()&&i<word2.length()) {
            s+=word1[i];
            s+=word2[i++];
        }
        while(i<word1.length()) s+=word1[i++];
        while(i<word2.length()) s+=word2[i++];
        return s;
    }
};