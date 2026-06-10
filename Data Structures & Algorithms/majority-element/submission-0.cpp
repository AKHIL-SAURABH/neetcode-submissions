class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n= nums.size();
        int ans = 0;

        for(int x : nums){
            mp[x]++;
        }
        for(auto i : mp){
            if(i.second >= n/2){
                ans = i.first;
            }
        }
        return ans;
    }
};