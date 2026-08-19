class Solution {
public:
    void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {
       
    
    int a = m - 1;
    int b = n - 1;
    int index = m+n - 1;
    
    while (a >= 0 && b >= 0)
    {
        if (arr1[a] > arr2[b])
        {
            arr1[index] = arr1[a];
            a--;
            index--;
        }
        else
        {
            arr1[index] = arr2[b];
            b--;
            index--;
        }
    }

    while(b>=0){
        arr1[index] = arr2[b];
            b--;
            index--;
    }


   

    return ;
    }
};