class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {        
        int n = nums.size();
        int left_sum[n];
        left_sum[0] = 0;
        for (int i = 1; i < n; i++) {
            left_sum[i] = left_sum[i-1] + nums[i-1];
        }
        int right_sum[n];
        right_sum[n-1] = 0;
        for (int i = n - 2; i >= 0; i--) {
            right_sum[i] = right_sum[i+1] + nums[i+1];
        }
        vector<int> ans(n);
        for (int i = 0; i < n; i++) {
            ans[i] = abs(left_sum[i] - right_sum[i]);
        }
        return ans;
    }
};
