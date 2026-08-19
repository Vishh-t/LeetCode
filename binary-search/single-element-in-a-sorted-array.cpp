class Solution {
public:
    int singleNonDuplicate(vector<int>& num) {
        int n = num.size();
    int start = 0;
    int end = n - 1;
    int mid;

    if (n == 1)
    {
        return num[0];
    }

    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (mid == 0 && num[mid] != num[mid + 1])
        {
            return num[mid];
        }

        if (mid == n - 1 && num[mid] != num[mid - 1])
        {
            return num[mid];
        }

        if (num[mid - 1] != num[mid] && num[mid] != num[mid + 1])
        {
            return num[mid];
        }
        if (mid % 2 == 0)
        {
            if (num[mid] == num[mid - 1])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        else
        {
            if (num[mid] == num[mid + 1])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
    }
    return 0;
    };
    
};