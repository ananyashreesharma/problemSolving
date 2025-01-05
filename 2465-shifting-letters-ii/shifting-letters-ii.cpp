class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
      int n = s.length();
    vector<int> diff(n + 1, 0);

    for (const auto& shift : shifts) {
        int start = shift[0], end = shift[1], direction = shift[2];
        diff[start] += (direction == 1 ? 1 : -1);
        diff[end + 1] -= (direction == 1 ? 1 : -1);
    }

    int shiftValue = 0;
    for (int i=0;i<n;i++) {
        shiftValue +=diff[i];
        int newChar =((s[i] - 'a') + shiftValue) % 26;
        if (newChar <0) newChar += 26;
        s[i] = 'a'+newChar;
    }

    return s;  
    }
};