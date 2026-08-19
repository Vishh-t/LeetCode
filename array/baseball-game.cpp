class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> ans;
    for (auto i : operations)
    {
        if (i == "C")
        {
            ans.pop_back();
        }
        else if (i == "D")
        {
            ans.push_back(2 * ans[ans.size() - 1]);
        }
        else if (i == "+")
        {
            ans.push_back(ans[ans.size() - 1] + ans[ans.size() - 2]);
        }
        else
        {
            ans.push_back(stoi(i));
        }
    }
    int sum = 0;
    for (int i : ans)
    {
        sum += i;
    }
return sum;
    }
};