class Solution {
public:
    int compress(vector<char>& alpha) {
         int n = alpha.size();
    char ch;
    int count;
    int idx = 0;
    for (int i = 0; i < n; i++)
    {
        ch = alpha[i];
        count = 0;
        while (i < n && ch == alpha[i])
        {
            count++;
            i++;
        }

        if (count == 1)
        {
            alpha[idx++] = ch;
        }

        else
        {
            alpha[idx++] = ch;
            string str = to_string(count);
            for (char dig : str)
            {
                alpha[idx++] = dig;
            }
        }

        i--;
    }
    alpha.resize(idx);
    return alpha.size();
    }
};