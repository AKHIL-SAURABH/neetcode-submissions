class Solution {
   public:
    int trap(vector<int>& height) {
        // Number of bars
        int n = height.size();

        // Two pointers
        int left = 0;
        int right = n - 1;

        // Highest wall seen from left
        int max_left = 0;

        // Highest wall seen from right
        int max_right = 0;

        // Total trapped water
        int water = 0;

        // Continue until pointers meet
        while (left < right) {
            // Left wall is smaller
            if (height[left] < height[right]) {
                // Update tallest left wall
                max_left = max(max_left, height[left]);

                // Add trapped water
                water += (max_left - height[left]);

                // Move left pointer
                left++;
            }

            // Right wall is smaller
            else {
                // Update tallest right wall
                max_right = max(max_right, height[right]);

                // Add trapped water
                water += (max_right - height[right]);

                // Move right pointer
                right--;
            }
        }

        // Return total water
        return water;
    }
};