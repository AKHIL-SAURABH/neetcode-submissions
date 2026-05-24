class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        //push the elements and their frequency in map
        for(int x : nums){
            mp[x]++;
        }

        vector<pair<int, int>> arr;

        //create an array and store the elemnts and their frequency from map into array in pair format
        for(auto y : mp){
            arr.push_back({y.second, y.first});
        }
        //here we have stored first freqeuncy and then the element

        //sort the array in reverse order
        sort(arr.rbegin(), arr.rend());

        vector<int> ans;

        //creat a new array and store only the top k elemnts whose frequncy is most as we have stored previous array in reverse order
        for(int i = 0; i<k; i++){
            ans.push_back(arr[i].second);
        }

        return ans;
    }
};
