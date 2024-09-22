class Solution {
public:
    vector<long long> mostFrequentIDs(vector<int>& nums, vector<int>& freq) {
        multiset<long long> ms;
        multiset<long long>::iterator it;
        long long cnt[100001] = { 0 };  // cnt[i] 代表 i 这个元素出现的次数
        vector<long long> ans(nums.size(), 0);
        for (int i = 0; i < nums.size(); ++i) {
            int x = nums[i];
            long long& c = cnt[x];
            it = ms.find(c);
            if (it != ms.end()) {
                ms.erase(it);
            }
            c += freq[i];
            ms.insert(c);
            ans[i] = *ms.rbegin();
        }
        return ans;
    }
};