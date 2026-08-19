class Solution {
public:
void getpermutation(vector<int> &arr, int idx, vector<vector<int>> &ans)
{
    int n = arr.size();
    if (idx == n)
    {
        ans.push_back(arr);
        return;
    }

    for (int i = idx; i < n; i++)
    {
        swap(arr[idx], arr[i]);
        getpermutation(arr, idx + 1, ans);
        swap(arr[idx], arr[i]);
    }
}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int idx = 0;
    vector<vector<int>> ans;
    getpermutation(nums, idx, ans);
    vector<vector<int>> unique;
    set<vector<int>> s;
    for (int i = 0; i < ans.size(); i++)
    {

        if (s.find(ans[i]) == s.end())
        {
            s.insert(ans[i]);
            unique.push_back(ans[i]);
        }
    }
return unique;
    }
};