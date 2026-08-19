class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int N = nums2.size();
        vector<int> storage;
        stack<int> s;
        // storing the indices of the elemnts in the map
        unordered_map<int, int> m;
        for (int i = 0; i < N; i++) {
            m[nums2[i]] = i;
        }

        // finding next greater element for all the elemnts in the nums2

        for (int i = N - 1; i >= 0; i--) {
            while (s.size() > 0 && s.top() < nums2[i]) {
                s.pop();
            }

            if (s.size() == 0) {
                storage.push_back(-1);
            } else {
                storage.push_back(s.top());
            }
            s.push(nums2[i]);
        }
        // reversing cuz the greater elemnts are right now stored in the
        // revervse order , so to make it correct we gotta reverse it
        reverse(storage.begin(), storage.end());

        // creating and storing the corresponding greater elemnts of the elemnts
        // in nums1 into the answer vector
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            int greater = storage[m[nums1[i]]];
            ans.push_back(greater);
        }
        return ans;
    }
};