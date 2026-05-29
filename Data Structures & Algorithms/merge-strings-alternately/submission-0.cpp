class Solution {
public:
    string mergeAlternately(string word1, string word2) {

        int n = word1.size();
        int m = word2.size();

        string ans;

        int left = 0;
        int right = 0;

        //add the chars to the string while elements are present
        while(left < n && right < m){
            ans += word1[left++];
            ans += word2[right++];
        }

        //and the remaining elements left in strings
        ans += word1.substr(left);
        ans += word2.substr(right);

        return ans;
    }
};