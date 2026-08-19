class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {


        int size1 = ransomNote.length();

        int size2 = magazine.length();
        vector<int> rn(26, 0);
        vector<int> mg(26, 0);

        for (int i = 0; i < size1; i++) {
            rn[ransomNote[i] - 'a']++;
        }

        for (int i = 0; i < size2; i++) {
            mg[magazine[i] - 'a']++;
        }
        int a = 1;
        for (int i = 0; i < 26; i++) {
            if (rn[i] > mg[i]) {
                a = 0;
            }
        }

        if (a == 1) {
            return true;
        }
        if (a == 0) {
            return false;
        }

        return 0;
    }

}
;