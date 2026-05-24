class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for(int i = 0; i< nums.size(); i++){
            int need = target - nums[i];

            if(mp.count(need)){
                return {mp[need], i};
            }
            mp[nums[i]] = i;             //we are pushing this value in map in condition that if there is any future element may come that will match with this elemnt to amke the target
                                        // like in first iteration 2 is checked and there is no other element in map to match so store 2 in map and check for other elemnt that is 7
                                        //now whenwe check for 7 we see we have 2 there in map that will complete the target that is why we stored the previous value in map
                                        //for storing we run the below line   
        }
        return{};
    }
};
