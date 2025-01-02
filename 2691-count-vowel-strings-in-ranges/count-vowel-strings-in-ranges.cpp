class Solution {
public:
   bool isVowelString(const string& word) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        // Check if both the first and last characters are vowels
        return vowels.count(word[0]) > 0 && vowels.count(word.back()) > 0;
    }

    // Main function to process the words and queries
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n = words.size();
        vector<int> prefix(n, 0);  // Initialize the prefix sum array

        // Step 1: Fill the prefix sum array
        prefix[0] = isVowelString(words[0]) ? 1 : 0;  // Check the first word
        for (int i = 1; i < n; ++i) {
            prefix[i] = prefix[i - 1] + (isVowelString(words[i]) ? 1 : 0);  // Increment based on the word
        }

        // Step 2: Answer the queries using the prefix sum array
        vector<int> results; 
        for (const auto& query : queries) {
            int li = query[0];  
            int ri = query[1];  

            if (li == 0) {
                results.push_back(prefix[ri]);
            } else {
                results.push_back(prefix[ri] - prefix[li - 1]);
            }
        }

        return results; 
    }
};