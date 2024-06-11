class Solution {
public:
    int findMax(vector<int> &v) {
    int maxi = INT_MIN;
    int n = v.size();
    for (int i = 0; i < n; i++) {
        maxi = max(maxi, v[i]);
    }
    return maxi;
}

double calculateTotalHours(vector<int> &v, int hourly) {
    double totalH = 0;
    double n = v.size();
    for (int i = 0; i < n; i++) {
        totalH += ceil((double)(v[i]) / (double)(hourly));
    }
    return totalH;
}

int minEatingSpeed(std::vector<int> v, int h) {
    int low = 1, high = findMax(v); // Initialize low to 1 and high to the maximum value in the vector

    // Binary search for the minimum eating speed
    while (low <= high) {
        double mid = (low + high) / 2; // Calculate the mid-point speed
        double totalH = calculateTotalHours(v, mid); // Calculate total hours needed at this speed
        
        if (totalH <= h) {
            high = mid - 1; // If total hours is less than or equal to h, search the lower half
        } else {
            low = mid + 1; // If total hours is greater than h, search the upper half
        }
    }

    return low; // The lowest speed at which the task can be completed within h hours
}
};