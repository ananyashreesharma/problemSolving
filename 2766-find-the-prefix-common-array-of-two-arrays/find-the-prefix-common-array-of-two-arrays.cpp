class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
      int n = A.size();
    vector<int> prefixCommonArray(n, 0);  // Result array to store common counts for each prefix
    vector<int> frequencyArray(n + 1, 0);  // Frequency array for numbers 1 to n
    int commonCount = 0;  // Counter for common elements

    for (int currentIndex = 0; currentIndex < n; ++currentIndex) {
        // Process A[currentIndex]
        frequencyArray[A[currentIndex]]++;
        if (frequencyArray[A[currentIndex]] == 2) {
            commonCount++;  // This element is common in both A and B
        }

        // Process B[currentIndex]
        frequencyArray[B[currentIndex]]++;
        if (frequencyArray[B[currentIndex]] == 2) {
            commonCount++;  // This element is common in both A and B
        }

        // Store the common count at the current index
        prefixCommonArray[currentIndex] = commonCount;
    }

    return prefixCommonArray;

    }
};