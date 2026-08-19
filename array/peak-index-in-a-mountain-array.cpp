class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
     long n = nums.size();
    long st = 1, end = n - 2;
    long mid;
    while (st <= end)
    {
        mid = st + (end - st) / 2;
        if (nums[mid - 1] < nums[mid] && nums[mid] > nums[mid + 1])
        {
            
            return mid;
        }

        else if (nums[mid - 1] < nums[mid] && nums[mid] < nums[mid + 1]) 
        {
            st = mid + 1;
        }

        else 
        {
            end = mid - 1;
        }
    }
return -1;
    }
};