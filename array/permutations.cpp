class Solution {
public:
void getpermutations(vector<int> &arr, int idx, vector<vector<int>> &ans)
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
        getpermutations(arr, idx + 1, ans);
        swap(arr[idx], arr[i]);
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        int idx = 0;
    vector<vector<int>> ans;
    getpermutations(nums, idx, ans);
   
    return ans;
    }
};