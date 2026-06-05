class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for (auto s : strs) {
            string power = s;
            sort(power.begin(), power.end());
            m[power].push_back(s);
        }
        vector<vector<string>> ans;
        for (auto pair : m) {
            ans.push_back(pair.second);
        }
        return ans;
    }
};