class Solution {
public:
    char findTheDifference(string s, string t) {
         int ns = s.length();
    int nt = t.length();

    vector<int> fs(26, 0);
    vector<int> ft(26, 0);

    for (int i = 0; i < ns; i++)
    {
        fs[s[i] - 'a']++;
    }
    for (int i = 0; i < nt; i++)
    {
        ft[t[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        char a = i+97;
        if (ft[i] - fs[i] != 0)
        {
           return a;
        }
    }

    return 'a';
    }
};