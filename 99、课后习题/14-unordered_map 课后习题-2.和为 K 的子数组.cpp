class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> cnt;
        int ans = 0;
        int pre = 0;
        cnt[pre]++;
        for (int i = 0; i < nums.size(); ++i) {
            pre = pre + nums[i];   // pre[i] = pre[i-1] + nums[i];
            ans += cnt[pre - k];
            cnt[pre]++;
        }
        return ans;
    }
};
/*
[j...i] ��������� k��                 sum(j...i) = k
pre[i] ������ [0...i] ��Ԫ�صĺ�   pre[i] = sum(0...i)
(1) pre[i] - pre[j-1] == k
(2) pre[j-1] = pre[i] - k    (0 <= j <= i)
*/