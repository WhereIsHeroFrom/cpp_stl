class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int n = nums.size();
        int m = nums[0].size();
        priority_queue <int> q[300];
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                q[i].push(nums[i][j]);
            }
        }
        int sum = 0;
        while (m--) {
            int ret = -1;
            for (int i = 0; i < n; ++i) {
                ret = max(ret, q[i].top());
                q[i].pop();
            }
            sum += ret;
        }
        return sum;
    }
};