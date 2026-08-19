class Solution {
public:
    void nextPermutation(vector<int>& nums) {
         
    int n = nums.size();
    int pivot = -1;
    for (int i = n - 2; i >= 0; i--) // find pivot, eg.2
    {
        if (nums[i] < nums[i + 1])
        {
            pivot = i;
            break;
        }
    }

    if (pivot == -1)
    {
        reverse(nums.begin(), nums.end());
    }

    for (int i = n - 1; i > pivot; i--) // swap right most elemnt less than pivot and element at pivot
    {
        if (pivot != -1 && nums[pivot] < nums[i])
        {
            swap(nums[pivot], nums[i]);
            break;
        }
    }

    if (pivot != -1) {
        int i = pivot + 1;
        int j = n - 1;
        while (i <= j) // reverse the remaining decreasing array
        {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }

    

    }
};