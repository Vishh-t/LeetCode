class Solution {
public:
    int firstUniqChar(string s) {
        int size = s.length();
    vector<int> freq(26, 0);

    for (int i = 0; i < size; i++)
    {
        freq[s[i] - 'a']++;
    }

    for (int i = 0; i < size; i++)
    {
        if (freq[s[i] - 'a'] == 1)
        {
           return i;
            
        }
    }
    return -1;

    }
};