class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        // Size of input array
        int n = nums.size();

        // Prefix product array
        // pre[i] = product of elements before i
        vector<int> pre(n);

        // Postfix product array
        // post[i] = product of elements after i
        vector<int> post(n);

        // Nothing exists before first index
        pre[0] = 1;

        // Nothing exists after last index
        post[n - 1] = 1;

        // Build prefix array
        for(int i = 1; i < n; i++){

            // Current left product
            pre[i] =
                pre[i - 1]
                *
                nums[i - 1];
        }

        // Build postfix array
        for(int i = n - 2; i >= 0; i--){

            // Current right product
            post[i] =
                post[i + 1]
                *
                nums[i + 1];
        }

        // Final answer array
        vector<int> arr(n);

        // Multiply left and right products
        for(int i = 0; i < n; i++){

            arr[i] =
                pre[i]
                *
                post[i];
        }

        return arr;
    }
};