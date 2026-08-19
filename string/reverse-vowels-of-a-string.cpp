class Solution {
public:
bool isVowel(char ch)
{
    if (tolower(ch) == 'a' || tolower(ch) == 'e' || tolower(ch) == 'i' || tolower(ch) == 'o' || tolower(ch) == 'u')
    {
        return true;
    }
    else
    {
        return false;
    }
}
    string reverseVowels(string s) {
        int n = s.length();
    int st = 0;
    int end = n - 1;

    while (st < end)
    {
        if (isVowel(s[st]) == false)
        {
            st++;
            continue;
        }
        if (isVowel(s[end]) == false)
        {
            end--;
            continue;
        }
        if (isVowel(s[st]) == true && isVowel(s[end]) == true)
        {
            swap(s[st], s[end]);
            st++;
            end--;
        }
    }
    return s;
    }
};