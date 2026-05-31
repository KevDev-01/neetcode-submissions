class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,set<int>> mp;
        int i;
        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            sort(s.begin(),s.end());
            mp[s].insert(i);
        }
        int cnt=0;
        vector<vector<string>> v(mp.size(),vector<string>(0));
        for(auto it=mp.begin();it!=mp.end();it++){
            for(auto it2:it->second){
                v[cnt].emplace_back(strs[it2]);
            }
            cnt++;
        }
        return v;
    }
};
