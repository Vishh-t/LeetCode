class Solution {
public:
    void sortColors(vector<int>& arr) {
        int n = arr.size();
    int low = 0, high = n - 1, mid = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[mid] == 0)
        {
            swap(arr[low], arr[mid]);
            {
                low++;
                mid++;
            }
        }

        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[high], arr[mid]);
            high--;
        }
    }
    return ;
    }
};