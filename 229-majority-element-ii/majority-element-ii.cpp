class Solution {
public:
    vector<int> majorityElement(vector<int>& v) {
    //     vector<int> ans;
    //    int ele1=INT_MIN;
    //    int ele2=INT_MIN;
    //    int c1=0;
    //    int c2=0;
    //    for(int i=0;i<nums.size();i++){
    //     if(c1==0 and nums[i]!=ele2){
    //         ele1=nums[i];
    //         c1=1;
            
    //     }
    //     else if(c2==0 and nums[i]!=ele1){
    //         ele2=nums[i];
    //         c2=1;
            
    //     }
    //     else if(ele1==nums[i]) c1++;
    //     else if(ele2==nums[i]) c2++;
    //     else{
    //         c1--;
    //         c2--;
    //     }
    //    }
    
    //      c1=0;
    //     c2=0;
    // for(int i=0;i<nums.size();i++){
       
    //     if(nums[i]==ele1) c1++;
    //     if(nums[i]==ele2) c2++;
    // }
    // int r=(int)(nums.size()/3)+1;
    // if(c1>r){
    //     ans.push_back(ele1);
    // }
    // if(c2>r){
    //     ans.push_back(ele2);
    // }
    // return ans;
        int n = v.size(); //size of the array

    int cnt1 = 0, cnt2 = 0; // counts
    int el1 = INT_MIN; // element 1
    int el2 = INT_MIN; // element 2

    // applying the Extended Boyer Moore's Voting Algorithm:
    for (int i = 0; i < n; i++) {
        if (cnt1 == 0 && el2 != v[i]) {
            cnt1 = 1;
            el1 = v[i];
        }
        else if (cnt2 == 0 && el1 != v[i]) {
            cnt2 = 1;
            el2 = v[i];
        }
        else if (v[i] == el1) cnt1++;
        else if (v[i] == el2) cnt2++;
        else {
            cnt1--, cnt2--;
        }
    }

    vector<int> ls; // list of answers

    // Manually check if the stored elements in
    // el1 and el2 are the majority elements:
    cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == el1) cnt1++;
        if (v[i] == el2) cnt2++;
    }

    int mini = int(n / 3) + 1;
    if (cnt1 >= mini) ls.push_back(el1);
    if (cnt2 >= mini) ls.push_back(el2);

    // Uncomment the following line
    // if it is told to sort the answer array:
    // sort(ls.begin(), ls.end()); //TC --> O(2*log2) ~ O(1);

    return ls;

    }
};