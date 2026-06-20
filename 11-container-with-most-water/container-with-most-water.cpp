class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int area=0, ans=(right)*min(height[left],height[right]);
        while(left<right){
            if(height[left]<height[right]){
                left++;
            }
            else if(height[left]>height[right]){
                right--;
            }
            else right--;
            area=(right-left)*min(height[left],height[right]);
            if(area>ans) ans=area;
        }
        return ans;
    }
};