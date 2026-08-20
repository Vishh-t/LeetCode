class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
  vector<int> copy = nums;

  sort(nums.begin(), nums.end());
  int i = 0;
  int j = size - 1;
  int num1, num2;

  while (i < j) {
    if (nums[i] + nums[j] < target) {
      i++;
      continue;
    } else if (nums[i] + nums[j] > target) {
      j--;
      continue;
    } else {
      num1 = nums[i];
      num2 = nums[j];
      break;
    }
  }

  auto idx1 = find(copy.begin(), copy.end(), num1);
  auto idx2 = find(copy.rbegin(), copy.rend(), num2);

  vector<int> answer(2);
  answer[0] = idx1 - copy.begin();
  answer[1] = copy.size() - 1 - (idx2 - copy.rbegin());

  return answer;
    }
};