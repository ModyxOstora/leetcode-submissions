class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> vowels = { 'a','e','i','o','u' };
        int left = 1;
        int right = k;
        int mx = 0;
        for (int i = 0;i < k;i++) {
            if (vowels.count(s[i])) mx++;
        }
        int vowels_count = mx;
        while (right < s.length()) {
            if (vowels.count(s[left - 1])) vowels_count--;
            if (vowels.count(s[right])) vowels_count++;
            if (mx < vowels_count) mx = vowels_count;
            left++;
            right++;
        }

        return mx;
    }
};