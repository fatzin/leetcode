//658ms runtime

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n , j = 0;
        int sum;
        vector<int> v;
        int curr_sum;
        do{
            n = nums[j];
            for(int i = 1; i < nums.size(); i++){
                curr_sum = nums[i];
                sum = n + curr_sum;
                if(sum == target && i != j){
                    v.push_back(j);
                    v.push_back(i);
                    return v;
                }
            }
           j++; 
        } while(sum != target);
        return v;
    }
};

//18ms runtime

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> indices;

        for (int i = 0; i < nums.size(); i++) {
            indices[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (indices.count(complement) && indices[complement] != i) {
            return {i, indices[complement]};
            }
        }

        return {};
    }
};