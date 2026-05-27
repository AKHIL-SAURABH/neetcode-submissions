class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();

        int left = 0;
        int right = n-1;
        int max_area = 0;

        while(left < right){

            // width = (right - left)
            // lenght = min(height[left] , height[right]) because till the smaller size poll the water will fill
            // that is why the curr_area will be (right - left) * min(heights[left] , heights[right]
            int curr_area= (right - left) * min(heights[left] , heights[right]);
            max_area = max(max_area, curr_area);

            if(heights[left] <= heights[right]){
                left++;
            }else{
                right--;
            }
        }
        return max_area;
    }
};
