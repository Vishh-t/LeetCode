class Solution {
public:
    bool isAnagram(string s, string t) {
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
        if (ft[i] != fs[i])
        {
           
            return false;;
        }
    }
    

    return true;
    }
};