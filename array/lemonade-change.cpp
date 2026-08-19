class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int size = bills.size();
    int C5 = 0;
    int C10 = 0;
    

    for (int i = 0; i < size; i++)
    {
        if (bills[i] == 5)
        {
            C5++;
        }
        else if (bills[i] == 10)
        {
            C10++;
            if (C5 < 1)
            {
               return false;
            }
            C5--;
        }
        else
        {
           
            if (C10 < 1)
            {
                if (C5 >= 3)
                {
                    C5 = C5 - 3;
                    continue;
                }
                else
                {
                    {
                       return false;
                    }
                }
            }
            if (C10 > 1 && C5 < 1)
            {
                return false;
            }
            else
            {
                C10--;
                C5--;
            }
        }
    }

    return true;
    }
};