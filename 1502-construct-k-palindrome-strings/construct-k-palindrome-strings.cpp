class Solution {
public:
    bool canConstruct(string s, int k) {
         // Step 1: Count the frequency of each character using a hashmap
    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    // Step 2: Count the total number of characters with odd frequencies
    int oddCount = 0;
    for (auto& entry : freq) {
        if (entry.second % 2 != 0) { // Check if frequency is odd
            oddCount++;
        }
    }

    // Step 3: Check conditions
    // If the total odd characters exceed k, return false
    // If k is greater than the string length, return false
    if (oddCount > k || k > s.length()) {
        return false;
    }

    // Otherwise, it is possible to form k palindrome strings
    return true;
    }
};