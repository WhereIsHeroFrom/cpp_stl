class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_multiset<string> ums;
        vector<string> ans;
        for (int i = 0; i + 10 <= s.size(); ++i) {
            string sub = s.substr(i, 10);
            ums.insert(sub);
            if (ums.count(sub) == 2) {
                ans.push_back(sub);
            }
        }
        return ans;
    }
};