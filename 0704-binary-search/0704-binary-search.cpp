class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size = nums.size();
        int st = 0;
        int end = size - 1;
        int mid;
        while (st <= end) {
            mid = st + (end - st) / 2;
            if (target == nums[mid]) {
                return mid;
            } else if (target > nums[mid]) {
                st = mid + 1;
            }else {
                end = mid -1;
            }
        }
        return -1;
    }
};