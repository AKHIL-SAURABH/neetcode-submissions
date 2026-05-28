class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        // Edge case
        if(nums.size()==0)
            return 0;

        // Points to last unique element
        int left = 0;

        // Scan remaining array
        for(int right = 1; right < nums.size(); right++){

            // Found new unique value
            if(nums[left] != nums[right]){

                // Move insertion position
                left++;

                // Copy unique element
                nums[left] =
                    nums[right];
            }
        }

        // Count of unique elements
        return left + 1;
    }
};