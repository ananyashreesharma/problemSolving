class Solution {
public:
    string longestPalindrome(string s) {
    int size = s.size();
    int maxLen = 0;
    int substringStart = 0;
        auto extend = [&](int left, int right) {
            while(left >= 0 && right < size && s[left] == s[right]) {
                left--;
                right++;
            }
            return right - left - 1;
        };
        for (int i = 0; i < size; i++) {
            int len1 = extend(i, i);
            int len2 = extend(i, i+1);
            int len = max(len1, len2);
            if (maxLen < len) {
                maxLen = len;
                substringStart = i - (maxLen - 1) / 2;
            }
        }
        return s.substr(substringStart, maxLen);
    }
};