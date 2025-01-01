class Solution {
public:
    int maxScore(string s) {
         int onesCount = 0;
    int zerosCount = 0;
    int maxScore = 0;
    for (char c : s) {
        if (c == '1') {
            onesCount++;
        }
    }
    
    for (int i = 0; i < s.size() - 1; i++) {  // Don't split at the very last character
        if (s[i] == '0') {
            zerosCount++;  // Increase zeros count in the left part
        } else {
            onesCount--;  // Decrease ones count in the right part
        }
        
       
        maxScore = max(maxScore, zerosCount + onesCount);
    }
    
    return maxScore;
    }
};