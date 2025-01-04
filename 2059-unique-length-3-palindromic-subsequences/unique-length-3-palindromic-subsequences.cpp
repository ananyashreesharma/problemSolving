class Solution {
public:
    int countPalindromicSubsequence(string s) {
         vector<int> firstOccurrence(26, -1);
    vector<int> lastOccurrence(26, -1);

   
    for (int i = 0; i < s.size(); ++i) {
        int idx = s[i] - 'a';
        if (firstOccurrence[idx] == -1) {
            firstOccurrence[idx] = i;
        }
        lastOccurrence[idx] = i;
    }

    unordered_set<string> uniquePalindromes;

   
    for (int i = 0; i < 26; ++i) {
        if (firstOccurrence[i] != -1 && lastOccurrence[i] > firstOccurrence[i]) {
            unordered_set<char> middleChars;
            for (int j = firstOccurrence[i] + 1; j < lastOccurrence[i]; ++j) {
                middleChars.insert(s[j]);
            }
            for (char middle : middleChars) {
                uniquePalindromes.insert(string(1, 'a' + i) + middle + char('a' + i));
            }
        }
    }

    return uniquePalindromes.size(); 
    }
};