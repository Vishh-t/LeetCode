class Solution {
public:
    bool isMatching(char s1, char s2) {
        if (s1 == '(') {
            if (s2 == ')') {
                return true;
            } else {
                return false;
            }
        }

        if (s1 == '{') {
            if (s2 == '}') {
                return true;
            } else {
                return false;
            }
        }

        if (s1 == '[') {
            if (s2 == ']') {
                return true;
            } else {
                return false;
            }
        }
        return false;
    }

    bool isValid(string s) {
        int n = s.length();
        if (n % 2 != 0)
    {
        return false;
    }
        stack<char> p;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                p.push(s[i]);
            } else {
                if (p.empty() || !isMatching(p.top(), s[i])) {
                    return false;
                } else {
                    p.pop();
                }
            }
        }
        return p.empty();
    }
};