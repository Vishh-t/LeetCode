class Solution {
public:
    string reverseOnlyLetters(string s) {
        int size = s.length();
    int i = 0;
    int j = size - 1;
    while (i <= j)
    {
        if (tolower(s[i]) >= 97 && tolower(s[i]) <= 122 && tolower(s[j]) >= 97 && tolower(s[j]) <= 122)
        {
            swap(s[i], s[j]);
            i++;
            j--;
        }
        else if (tolower(s[i]) >= 97 && tolower(s[i]) <= 122 && (tolower(s[j]) < 97 || tolower(s[j]) > 122))
        {
            j--;
        }
        else if ((tolower(s[i]) < 97 || tolower(s[i]) > 122) && tolower(s[j]) >= 97 && tolower(s[j]) <= 122)
        {
            i++;
        }
        else
        {
            i++;
            j--;
        }
    }
    return s;

    }
};