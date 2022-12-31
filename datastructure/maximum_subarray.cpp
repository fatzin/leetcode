class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0];
        int curr_sum = nums[0];

  
            for (int i = 1; i < nums.size(); i++) {
            curr_sum = std::max(curr_sum + nums[i], nums[i]);
            max_sum = std::max(max_sum, curr_sum);
        }
        return max_sum;
    }
};