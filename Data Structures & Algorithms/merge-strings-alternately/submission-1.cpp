class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0;
        string s="";
        while(i<word1.length()&&i<word2.length()) {
            s+=word1[i];
            s+=word2[i++];
        }
        s+=word1.substr(i);
        s+=word2.substr(i);
        return s;
    }
};