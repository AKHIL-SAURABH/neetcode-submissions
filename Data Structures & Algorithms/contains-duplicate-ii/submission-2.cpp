class Solution {
   public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        ///use unordered set
        unordered_set<int> st;
        int n = nums.size();

        int left = 0;

        for (int right = 0; right < n; right++) {
            if (st.count(nums[right])) {
                return true;
            }

            // insert the element in set
            st.insert(nums[right]);

            //if condition of j-i <= k is not followed then increase the left side by removing 
            //the element from the set
            if (right - left >= k) {
                st.erase(nums[left]);
                left++;
            }
        }
        return false;
    }
};