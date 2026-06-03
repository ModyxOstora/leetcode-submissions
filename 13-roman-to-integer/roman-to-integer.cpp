class Solution {
    unordered_map<char,int> m={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{{'M'},1000}};
public:
    int romanToInt(string s) {
        int ans=0;
        int mx=0;
        for(int i=s.length()-1;i>=0;i--){
            if(m[s[i]]>=mx){
                mx=m[s[i]];
                ans+=mx;
            }
            else ans-=m[s[i]];
        }
        return ans;
    }
};