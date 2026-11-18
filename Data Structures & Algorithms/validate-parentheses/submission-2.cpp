class Solution {
   public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> m{
            {')', '('},
            {'}', '{'},
            {']', '['}
        };
        for (const auto& c : s) {
            if (m.find(c) == m.end()) {
                st.push(c);
            } else {
                if (!st.empty() && st.top() == m[c]){
                    st.pop();
                } else {
                    return false;
                }
            }
        }

        if (st.empty()) return true;
        return false;
    }
};
