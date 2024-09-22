class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int, int> hash;
        for (int i = 0; i < nums1.size(); ++i) {
            for (int j = 0; j < nums2.size(); ++j) {
                hash[-(nums1[i] + nums2[j])]++;
            }
        }
        int ans = 0;
        for (int k = 0; k < nums3.size(); ++k) {
            for (int l = 0; l < nums4.size(); ++l) {
                ans += hash[nums3[k] + nums4[l]];
            }
        }
        return ans;
    }
};

// nums1[i] + nums2[j] + nums3[k] + nums4[l] == 0
//  + nums3[k] + nums4[l] == -(nums1[i] + nums2[j])