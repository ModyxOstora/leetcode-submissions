class Solution {
public:
    bool isPalindrome(long long x) {
        if(x<0) return false;
        long long ans = 0;
        long long x1 = x;
        while (x1) {
            ans *= 10;
            ans += x1 % 10;
            x1 /= 10;
        }
        if(x==ans) return true;
        else return false;
    }
};