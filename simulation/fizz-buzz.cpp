class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer(n + 1); // answer[0] is not to be used nor to be printed out
answer[0]="\0";
    for (int i = 1; i < n+1; i++)
    {
        if (i % 15 == 0)
        {
            answer[i] = "FizzBuzz";
        }
        else if (i % 5 == 0)
        {
            answer[i] = "Buzz";
        }
        else if (i % 3 == 0)
        {
            answer[i] = "Fizz";
        }
        else
        {
            answer[i] = to_string(i);
        }
    }
    vector<string> result(answer.begin() + 1, answer.end());
return result;

    }
};