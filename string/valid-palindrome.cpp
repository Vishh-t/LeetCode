class Solution {
public:
    bool isAlphaNum(char ch) {
        if ('0' <= ch && ch <= '9' ||
            tolower(ch) >= 'a' && tolower(ch) <= 'z') {
            return true;
        }

        else {
            return false;
        }
    }

    bool isPalindrome(string s) {

        int n = s.length();
        int st = 0;
        int end = n - 1;

        while (st < end) {
            if (isAlphaNum(s[st]) == false) {
                st++;
                continue;
            }
            if (isAlphaNum(s[end]) == false) {
                end--;
                continue;
            }
            if (tolower(s[st]) != tolower(s[end])) {

                return false;
            } else {
                st++;
                end--;
            }
        }
        if (st >= end) {

            return true;
        }
        return 0;
    }
};