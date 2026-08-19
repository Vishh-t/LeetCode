class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int size = nums.size();
    int a = 0;
    int b = 1;
    vector<int> answer(size, 0);

    for (int i : nums)
    {
        if (i % 2 == 0)
        {
            answer[a] = i;
            a += 2;
        }
        else
        {
            answer[b] = i;
            b += 2;
        }
    }

    return answer;
    }
};