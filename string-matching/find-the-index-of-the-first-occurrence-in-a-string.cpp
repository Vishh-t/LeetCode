class Solution {
public:
    int strStr(string haystack, string needle) {

        int size = haystack.length();
        int index = haystack.find(needle);

        if (index >= 0 && index < size) {

            return index;
        } else {

            return -1;
        }
    }
};