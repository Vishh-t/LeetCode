class Solution {
public:
    bool isValid(string word) {
        int n = word.length();

        if (n < 3) {
            return false;
        }

        int countV = 0;
        int countC = 0;
        for (auto i : word) {
            if (!isalnum(i)) {
               return false;
            }
            if (!isalpha(i)) {
                continue;
            }
            char letter = tolower(i);
            if (letter == 'a' || letter == 'e' || letter == 'i' ||
                letter == 'o' || letter == 'u') {
                countV++;
            } else {
                countC++;
            }
        }

        if (countV < 1 || countC < 1) {
            return false;
        }

        return true;
    }
};