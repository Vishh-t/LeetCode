class Solution {
public:
    string reverseStr(string s, int k) {
        
    int n = s.length();

    int i = 0;
    int j = k;
 
    while (i < n)
    {

        int st = i;
        int end = min(i + k - 1, n - 1);
        while (st < end)
        {
            swap(s[st], s[end]);

            st++;
            end--;
        }

        i += 2 * k;
        j += 2 * k;
    }
return s;
    }
};