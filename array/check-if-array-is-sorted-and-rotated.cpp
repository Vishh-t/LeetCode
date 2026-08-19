class Solution {
public:
    bool check(vector<int>& nums) {
        int size = nums.size();
        int first = nums[0];
        bool sorted;
        int counter = 0;
        do {
            sorted = true;

            for (int i = 0; i < size - 1; i++) {
                if (nums[i] > nums[i + 1]) {
                    sorted = false;
                    break;
                }
            }

            if (sorted == true) {

                return true;
            }

            int temp = nums[size - 1];
            for (int i = size - 1; i > 0; i--) {
                nums[i] = nums[i - 1];
            }
            nums[0] = temp;
            counter++;
        } while (counter != size);

        return false;
    }
};