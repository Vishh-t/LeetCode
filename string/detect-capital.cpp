class Solution {
public:
    bool detectCapitalUse(string s) {
        int size = s.length();
        int count = 0;
        int firstletter = 0;
        if (s[0] >= 65 && s[0] <= 90) {
            firstletter++;
        }

        for (int i = 0; i < size; i++) {

            if (s[i] >= 65 && s[i] <= 90) {
                count++;
            }
        }

        if (firstletter == 1 && count == 1) {

            return true;
        }

        else if (count == 0) {

            return true;
        } else if (count == size) {

            return true;
        }

        return false;
    }
};