class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        vector<int> tmp;

        //push the elements of first array in temporaray array
        int i=0;
        while(i<m){
            tmp.push_back(nums1[i++]);
        }

        //push the second array elements in temporaray array
        int j=0;
        while(j<n){
            tmp.push_back(nums2[j++]);
        }

        //sort the temporary array
        sort(tmp.begin(),tmp.end());

        //copy the elements in original array
        for(int i=0; i<m+n; i++){
            nums1[i]=tmp[i];
        }
        
    }
};