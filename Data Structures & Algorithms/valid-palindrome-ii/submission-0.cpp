class Solution {
   public:
    // Normal palindrome checker
    bool isPal(string s, int left, int right) {
        while (left < right) {
            // Mismatch found
            if (s[left] != s[right]) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }

    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            // Mismatch found
            if (s[left] != s[right]) {
                // Try deleting left character
                // OR deleting right character
                return isPal(s, left + 1, right) || isPal(s, left, right - 1);
            }

            left++;
            right--;
        }

        // Already palindrome
        return true;
    }
};