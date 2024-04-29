class Solution {
public:
    vector<int> getRow(int row) {
       long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1); //inserting the 1st element

    //calculate the rest of the elements:
    for (long long col = 1; col < row+1; col++) {
        ans = ans * (row+1 - col);
        ans = ans / col;
        ansRow.push_back(ans);
    }
    return ansRow;
    }
};