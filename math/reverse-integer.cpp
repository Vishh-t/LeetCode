class Solution {
public:
int revNum(int n)
{

    int digit;
    int reverse = 0;
    while (n !=0 )
    {
        digit = n % 10;
        if(reverse > INT_MAX/10 ||  reverse < INT_MIN/10){
            return 0;
        }

        reverse = reverse * 10 + digit;
        n = n / 10;
        
    }
    // if(reverse >= pow(-2,31)&& reverse <= pow(2,31)-1)
    return reverse;
    
}

    int reverse(int x) {
        return revNum(x);
    }
};