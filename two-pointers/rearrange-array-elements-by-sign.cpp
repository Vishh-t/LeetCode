class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int size = nums.size();
  int i = 0;
  int j = i + 1;

  vector<int> positives;
  vector<int> negatives;

  for (auto num : nums) {
    if (num > 0) {
      positives.push_back(num);
    } else {
      negatives.push_back(num);
    }
  }

  vector<int> answer;
  int count = 0;
  int p = 0;
  int n = 0;
  while (count != size) {
    nums[count] = positives[p];
    p++;
    count++;
    nums[count] = negatives[n];
    count++;
    n++;
  }
  return nums;

    }
};