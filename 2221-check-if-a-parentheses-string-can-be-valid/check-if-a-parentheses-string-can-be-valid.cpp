class Solution {
public:
    bool canBeValid(string s, string locked) {
    int n = s.size();
    if (n % 2 != 0) return false;
    
    int open_count = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '(' || locked[i] == '0') open_count++;
        else open_count--;
        if (open_count < 0) return false;
    }

    int close_count = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == ')' || locked[i] == '0') close_count++;
        else close_count--;
        if (close_count < 0) return false;
    }
    
    return true;
    }
};