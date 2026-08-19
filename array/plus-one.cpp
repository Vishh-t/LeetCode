class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
    int st = n - 1;

    if (digits[st] < 9)
    {
        digits[st]++;
    }

    else
    {
        while (st >= 0)
        {
            if (digits[st] == 9)
            {
                digits[st] = 0;
                st--;
            }
            else
            {
                digits[st]++;
                break;
            }
        }
        if (st < 0)
        {
            digits.insert(digits.begin(), 1);
        }
    }
return digits;
    }
};