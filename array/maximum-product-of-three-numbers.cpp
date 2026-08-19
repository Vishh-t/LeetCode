class Solution {
public:
    int maximumProduct(vector<int>& nums) {
         int size = nums.size();

    sort(nums.begin(), nums.end());

    int a1 = nums[size - 1] * nums[size - 2] * nums[size - 3];
   
    int a3 = nums[0] * nums[1] * nums[size - 1];
     int ans = max(a1, a3);
     return ans;
    }

};