class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = s.length();
        int j = length - 1;
        int count = 0;
        while (j >= 0) {
            if (count == 0) {
                if (s[j] == ' ') {
                    j--;
                } else {
                    count++;
                    j--;
                }
            } else if (s[j] != ' ') {
                count++;
                j--;
            } else {

                break;
            }
        }

        return count;
    }
};