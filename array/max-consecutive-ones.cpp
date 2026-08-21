class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int size = nums.size();
        int counter = 0;
        int maxCounter = INT_MIN;
        for (int i = 0; i < size ; i++) {
            if(nums[i]==1){
                counter ++;
            }else {
                maxCounter = max(maxCounter , counter);
                counter = 0;
            }
        }

        if(nums[size -1]==1){
            maxCounter = max(maxCounter , counter);
        }

       return maxCounter;
    }
};