class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map<int, int> mp;
        for (int i = 0; i < items1.size(); ++i) {
            int val = items1[i][0];
            int wei = items1[i][1];
            mp[val] += wei;
        }
        for (int i = 0; i < items2.size(); ++i) {
            int val = items2[i][0];
            int wei = items2[i][1];
            mp[val] += wei;
        }
        vector<vector<int>> ans;
        for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++) {
            int val = it->first;
            int wei = it->second;
            vector<int> x = { val, wei };
            ans.push_back(x);
        }
        return ans;
    }
};