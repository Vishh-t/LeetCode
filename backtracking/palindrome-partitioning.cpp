class Solution {
public:
    bool isPallindrome(string part) {
        int n = part.length();
        int l = 0;
        int r = n - 1;
        while (l <= r) {
            if (part[l] != part[r]) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }

    void allparts(string s, vector<string>& partition,
                  vector<vector<string>>& ans) {
        int n = s.length();

        if (n == 0) {
            ans.push_back(partition);
            return;
        }

        for (int i = 0; i < n; i++) {
            string part = s.substr(0, i + 1);
            if (isPallindrome(part)) {
                partition.push_back(part);
                allparts(s.substr(i + 1), partition, ans);
                partition.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> partition;
        vector<vector<string>> ans;

        allparts(s, partition, ans);
        return ans;
    }
};