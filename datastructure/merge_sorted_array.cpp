class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int max_size = m + n;
        int curr_item;
        if(n > 0 && m > 0){
        nums1.resize(max_size-n);
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        std::sort(nums1.begin(), nums1.end());
        }
        if(n > 0 && m == 0){
            nums1.resize(0);
            nums1.insert(nums1.end(), nums2.begin(), nums2.end());
        }
        if(n == 0 && m > 0){
            std::sort(nums1.begin(), nums1.end());
        }   
    }
};