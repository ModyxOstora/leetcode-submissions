class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,pair<int,char>> m;
        vector<int> ans(2);
        for(int i=0;i<nums.size();i++){
            if(m[target-nums[i]].second=='a'){
                ans[0]=m[target-nums[i]].first;
                ans[1]=i;
                return ans;
            }
            m[nums[i]]={i,'a'};
        }
        return ans;
    }
};