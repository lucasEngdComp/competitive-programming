#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int size1 = nums.size();
        sort(nums.begin(),nums.end());
        return ((nums[size1-1] -1 ) * (nums[size1 -2]-1));
    }
};

int main(){

    Solution sol;
    vector<int> array = {3,7};

    int i = sol.maxProduct(array);
    cout << i;

}