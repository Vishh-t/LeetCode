class Solution {
public:
int reverse(int n)
{
    int digit;
    long rev = 0;
    while (n > 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    return rev;
}
    bool isPalindrome(int x) {
         if (x == reverse(x))
        return true;
    else
        return false;
    }
    
};