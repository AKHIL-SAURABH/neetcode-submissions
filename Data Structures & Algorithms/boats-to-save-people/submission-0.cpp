class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {

        // Sort people by weight
        sort(people.begin(), people.end());

        // Two pointers:
        // left  -> lightest person
        // right -> heaviest person
        int left = 0;
        int right = people.size() - 1;

        // Count of boats used
        int cnt = 0;

        // Continue until all people are assigned
        while (left <= right) {

            // If lightest and heaviest can share a boat
            if (people[left] + people[right] <= limit) {
                left++;     // lightest person used
                right--;    // heaviest person used
            }
            else {
                // Heaviest person must go alone
                right--;
            }

            // One boat is used in either case
            cnt++;
        }

        return cnt;
    }
};