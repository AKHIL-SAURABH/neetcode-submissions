class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(),nums.end());
        int ans = 1;

        for(int x: nums){
            if(x < ans){
                continue;
            }
            if(x == ans){
                ans++;
            }
        }
        return ans;
    }
};