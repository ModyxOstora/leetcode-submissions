class Solution {
public:
    inline bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    int maxVowels(string s, int k) {
        int vowels_count = 0;
        for (int i = 0; i < k; i++) {
            if (isVowel(s[i])) vowels_count++;
        }
        int mx = vowels_count;
        for (int i = k; i < s.length(); i++) {
            if (isVowel(s[i])) vowels_count++;
            if (isVowel(s[i - k])) vowels_count--;
            if (vowels_count > mx) mx = vowels_count;
        }
        
        return mx;
    }
};