class Solution {
public:
bool isEqual(const vector<int> f1, const vector<int> f2)
{
    int a;
    for (int i = 0; i < 26; i++)
    {
        a = 1;
        if (f1[i] != f2[i])
        {
            a = 0;
            break;
        }
    }
    if (a == 1)
        return true;
    else
        return false;
}


    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
    int N = s2.length();

    vector<int> frequency(26, 0); // each box stores frequence of each alphabet

    for (int i = 0; i < n; i++)
    {
        frequency[s1[i] - 'a']++;
    }

    int st = 0;
    int end = n - 1;

    for (int j = 0; j < N - n + 1; j++)
    {
        vector<int> winfrequency(26, 0);
        for (int i = st; i <= end; i++)
        {
            winfrequency[s2[i] - 'a']++;
        }

        if (isEqual(frequency, winfrequency))
        {
            
            return true;
        }
        st++;
        end++;
    }

    return false ;
    }
};