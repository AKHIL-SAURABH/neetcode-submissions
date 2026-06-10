class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;

        int n = nums.size();

        for(int x : nums){
            mp[x]++;
        }

        vector<int> ans;
        for(auto i : mp){
            if(i.second > n/3){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};