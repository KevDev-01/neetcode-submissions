class Solution {
public:
    bool isPalindrome(string s) {
        bool flag=true;
        string t="";
        for(const auto &x:s){
            if((x>='a'&&x<='z')||(x>='0'&&x<='9')){
                t+=x;
            }else if(x>='A'&&x<='Z'){
                t+=char(x-'A'+'a');
            }
        }
        for(int i=0;i<t.length()/2;i++){
            if(t[i]!=t[t.length()-i-1]){
                flag=false;
                break;
            }
        }
        return flag;
    }
};
