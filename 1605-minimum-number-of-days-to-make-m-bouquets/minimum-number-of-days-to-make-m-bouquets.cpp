class Solution {
public:
   public:
   int minDays(vector<int>& bloomDay, int m, int k) {
        // Check if it's possible to make the required number of bouquets
        if ((long long)m * (long long)k > bloomDay.size()) {
            return -1;
        }

        int left = *min_element(bloomDay.begin(), bloomDay.end()); // Minimum day
        int right = *max_element(bloomDay.begin(), bloomDay.end()); // Maximum day
        int result = right; // Initialize result to the maximum possible day

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (possible(bloomDay, mid, m, k)) {
                result = mid; // Update result to the current mid value
                right = mid - 1; // Try for a smaller number of days
            } else {
                left = mid + 1; // Try for a larger number of days
            }
        }

        return result;
    }

    // Function to check if it's possible to make m bouquets on a given day
    bool possible(vector<int>& bloomDay, int day, int m, int k) {
        int count = 0; // Count of adjacent flowers that can form a bouquet
        int bouquets = 0; // Number of bouquets formed

        for (int i = 0; i < bloomDay.size(); i++) {
            if (bloomDay[i] <= day) {
                count++;
                if (count == k) {
                    bouquets++;
                    count = 0;
                }
            } else {
                count = 0;
            }
        }

        return bouquets >= m;
    }


};