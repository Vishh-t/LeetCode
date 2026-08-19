class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
    int n1 = nums1.size();
    int n2 = nums2.size();

    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    int i = 0;
    int j = 0;

    while (i < n1 && j < n2)
    {
        if (nums1[i] > nums2[j])
        {
            j++;
        }
        else if (nums1[i] == nums2[j])
        {
            ans.push_back(nums1[i]);
            i++;
            j++;
        }
        else
        {
            i++;
        }
    }

    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());

    return ans ;
    }
};