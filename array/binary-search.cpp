class Solution {
public:
    int binarySearch(vector<int> arr, int target, int start, int end) {
        int mid = start + (end - start) / 2;
        if (start <= end) {
            if (arr[mid] == target) {
                return mid;
            }

            if (target > arr[mid]) {
                return binarySearch(arr, target, mid + 1, end);
            }

            else {
                return binarySearch(arr, target, start, mid - 1);
            }
        }
        else {
            return -1;
        }
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0;
        int end = n - 1;
        int index = binarySearch(nums, target, start, end);
        return index;
    }
};