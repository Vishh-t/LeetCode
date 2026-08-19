class Solution {
public:
    string removeOccurrences(string s, string part) {
        int N = s.length();
    int n = part.length();

    while (0 <= s.find(part) && s.find(part) < N)
    {

        s.erase(s.find(part), n);
    }
    return s;
    }
};