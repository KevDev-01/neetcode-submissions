class Solution {

public:
    string encode(vector<string>& strs) {
        string s;
        for(const auto& x:strs){
            s+=to_string(x.length());
            s+='#';
            s+=x;            
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> strs;

        for(int i=0;i<s.length();i++){
            string num="";
            int t=0;
            while(s[i]!='#'&&s[i]>='0'&&s[i]<='9'){
                num+=s[i];
                i++;
            }
            t=stoi(num);
            strs.emplace_back(s.substr(i+1,t));
            i+=t;
        }
        return strs;
    }
};
