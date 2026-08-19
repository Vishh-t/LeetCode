class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int ns = s.length();
    int nt = t.length();
    int st1 = 0;
    int st2 = 0;
    if (ns != 0)
    {
        while (st1 < s.length())
        {

            if (s[0] == '#')
            {
                s.erase(0, 1);
                continue;
            }
            if (s[st1] == '#')
            {
                s.erase(st1 - 1, 2);
                st1 = 0;
            }
            st1++;
        }
    }
    if (nt != 0)
    {
        while (st2 < t.length())
        {

            if (t[0] == '#')
            {
                t.erase(0, 1);
                continue;
            }
            if (t[st2] == '#')
            {
                t.erase(st2 - 1, 2);
                st2 = 0;
            }
            st2++;
        }
    }

    if (s.length() != t.length())
    {
       
        return false;
    }

    if (s.length() == 0 && t.length() == 0)
    {
        
        return true;
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != t[i])
        {
            
            return false;
        }
    }

    
    return true;
    }
};