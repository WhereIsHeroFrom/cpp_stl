class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(nums);
        ans.resize(2 * n);
        for (int i = 0; i < n; ++i) {
            ans[i + n] = nums[i];
        }
        return ans;
    }
};