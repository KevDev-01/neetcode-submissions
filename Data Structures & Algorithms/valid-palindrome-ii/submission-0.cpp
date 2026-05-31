class Solution {
public:
    bool validPalindrome(string s) {
        int i,l,r;
        bool flag=false;
        int n=s.length();
        for(i=0;i<n;i++){
            if(s[i]!=s[n-i-1]){
                flag=true;
                l=i;
                r=n-i-1;
            }
        }
        if(flag){
            string s1="",r1,s2="",r2;
            s1+=s.substr(0,l);
            s1+=s.substr(l+1,n-l-1);
            r1=s1;
            reverse(s1.begin(),s1.end());
            if(s1==r1) return true;
            s2+=s.substr(0,r);
            s2+=s.substr(r+1,n-r-1);
            r2=s2;
            reverse(s2.begin(),s2.end());
            if(s2==r2) return true;
            return false;
        }
        return true;
    }
};