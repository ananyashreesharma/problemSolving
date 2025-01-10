class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int> maxRequired(26, 0); 
    for (string i : words2) {
        vector<int> count(26, 0);
        for (char c : i) {
            count[c - 'a']++; 
        }
        for (int i = 0; i < 26; i++) {
            maxRequired[i] = max(maxRequired[i], count[i]);
        }
    }
    vector<string> result;
    for (string i : words1) {
        vector<int> count(26, 0);
        for (char c : i) {
            count[c - 'a']++; }
        bool isUni= 1;
        for (int i = 0; i < 26; i++) {
            if (count[i] < maxRequired[i]) { 
                isUni = 0;
                break;
            }
        }
        if (isUni) {
            result.push_back(i);
        }
    }

    return result;
    }
};