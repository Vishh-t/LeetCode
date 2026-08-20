class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet;
  int size = nums.size();
  int count = 1;
  int maxLength = 1;

  if (size == 0) {
    return 0;
  }

  for (int i = 0; i < size; i++) {
    numSet.insert(nums[i]);
  }

  for (auto num : numSet) {
    // checking if it is the start fo a sequence in order to sacve watseful
    // effort
    if (numSet.find(num - 1) == numSet.end()) {
      int count = 1;
      int x = num;

      while (numSet.find(x + 1) != numSet.end()) {
        x = x + 1;
        count++;
      }

      maxLength = max(count, maxLength);
    }
  }

  return maxLength;
    }
};