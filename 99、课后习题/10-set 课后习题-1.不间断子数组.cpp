class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        multiset<int> mst;
        int i = 0, j = -1;
        int n = nums.size();
        long long ans = 0;
        while (j++ < n - 1) {
            mst.insert(nums[j]);
            int min = *mst.begin();
            int max = *mst.rbegin();
            while (max - min > 2) {
                multiset<int>::iterator it = mst.find(nums[i]);
                mst.erase(it);
                i++;
                min = *mst.begin();
                max = *mst.rbegin();
            }
            // max - min <= 2
            ans += j - i + 1;
        }
        return ans;
    }
};