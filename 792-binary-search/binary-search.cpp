class Solution {
public:

int recursiveBinarySearch(const std::vector<int>& arr, int target, int low, int high) {
    if (low > high) {
        return -1; // Target not found
    }
    
    int mid = low + (high - low) / 2; // To avoid overflow
    
    if (arr[mid] == target) {
        return mid; // Target found
    } else if (arr[mid] < target) {
        return recursiveBinarySearch(arr, target, mid + 1, high); // Search in the right half
    } else {
        return recursiveBinarySearch(arr, target, low, mid - 1); // Search in the left half
    }
}

    int search(vector<int>& arr, int target) {
       int result = recursiveBinarySearch(arr, target, 0, arr.size() - 1);
       return result;
    }
};