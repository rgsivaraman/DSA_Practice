class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right=n-1;
        int maxArea=0,currArea=0;
        while(left<right){
            currArea=(right-left)*min(height[left],height[right]);
            maxArea=max(maxArea,currArea);
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxArea;
    }
};