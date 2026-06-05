class Solution {
public:
    bool isPalindrome(string s) {
        string test = "";
        for (auto c : s) {
            if (isalnum(c)) {
                test += tolower(c);
            }
        }
        int left = 0;
        int right = test.length() - 1;
        while (left < right) {
            if (test[left] != test[right]) return false;
            left++;
            right--;
        }
        return true;
    }
};