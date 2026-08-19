class Solution {
public:bool GoodString(string word, string chars)
{
    vector<int> freqC(26, 0);
    int sizeC = chars.length();
    for (int i = 0; i < sizeC; i++)
    {
        freqC[chars[i] - 'a']++;
    }
    int sizeW = word.length();
    vector<int> freqW(26, 0);
    for (int i = 0; i < sizeW; i++)
    {
        freqW[word[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freqW[i] > freqC[i])
        {
            return false;
        }
    }
    return true;
}
    int countCharacters(vector<string>& words, string chars) {
        int size = words.size();
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (GoodString(words[i], chars))
        {
            sum += words[i].length();
        }
    }
return sum;
    }
};