class Solution {
public:
    vector<int> getRow(int n) {
     vector<int> result(n + 1, 1); // Initialize the vector with n + 1 elements, all set to 1
    
    // Generate elements of the row using the previous row
    for (int i = 1; i < n; i++) {
        // Update each element in the row based on the previous row and symmetry property
        result[i] = (long long) result[i - 1] * (n - i + 1) / i;
    }
    
    return result;
    }
};