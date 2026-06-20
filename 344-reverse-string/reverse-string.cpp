class Solution {
public:
    void reverseString(vector<char>& s) {
        char c;
        int left=0;
        int right=s.size()-1;
        while(right>left){
            c=s[left];
            s[left]=s[right];
            s[right]=c;
            right--;
            left++;
        }
    }
};