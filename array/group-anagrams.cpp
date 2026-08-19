class Solution {
public:
    vector<int> freq(string s) {
        vector<int> f(26, 0);
        int n = s.length();
        for (int i = 0; i < n; i++) {
            f[s[i] - 'a']++;
        }
        return f;
    }

    string ConvertString(vector<int> f) {
        string key = "";
        for (int i = 0; i < 26; i++)
            
                key += to_string(f[i])+"#";
            
        return key;
    }
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string, vector<string>> group;

        for (int i = 0; i < n; i++) {
            string key = ConvertString(freq(strs[i]));
            group[key].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for (auto& a : group) {
            ans.push_back(a.second);
        }
        return ans;
    }
};