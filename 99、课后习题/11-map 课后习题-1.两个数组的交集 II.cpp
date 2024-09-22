class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> cnt;
        vector<int> ans;
        for (int i = 0; i < nums1.size(); ++i) {
            int x = nums1[i];
            cnt[x]++;
        }
        for (int i = 0; i < nums2.size(); ++i) {
            int x = nums2[i];
            if (cnt[x] > 0) {
                cnt[x]--;
                ans.push_back(x);
            }
        }
        return ans;
    }
};