class Solution {
public:
  int calculateSum(const vector<int>& nums, int divisor) {
    int sum = 0;
    for (int num : nums) {
        sum += (num + divisor - 1) / divisor; // Equivalent to ceil(num / divisor)
    }
    return sum;
}

// Function to find the smallest divisor such that the sum is less than or equal to the threshold
int smallestDivisor(vector<int>& nums, int threshold) {
    int low = 1;
    int high = *max_element(nums.begin(), nums.end());
    
    while (low < high) {
        int mid = low + (high - low) / 2;
        int sum = calculateSum(nums, mid);
        
        if (sum <= threshold) {
            high = mid; // Try to find a smaller divisor
        } else {
            low = mid + 1; // Increase the divisor
        }
    }
    
    return low;
}

};