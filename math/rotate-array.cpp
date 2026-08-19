class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
  int size = nums.size();

  if (k > size) {
    k = k % size;
  }

  vector<int> answer(size);
  int a = 0;
  for (int i = size - k ; i <= size - 1; i++) {
    answer[a] = nums[i];
    a++;
  }

  for (int i = 0; i <= size - k - 1; i++, a++) {
    answer[a] = nums[i];
  }

  for (int i = 0; i <= size - 1; i++) {
    nums[i] = answer[i];
  }
    }
};