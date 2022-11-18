#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        for(size_t i = 0; i < nums.size();i++){
            for(size_t j = 0; j < i;j++){
                if(nums[i] == nums[j]){
                    count+=1;
                }else{
                    continue;
                }
            }
            
        }
        return count;
    }
    
};

int main(){


	Solution sol;

	vector<int> nums = {1,2,3,1,1,3};
	
	cout<<sol.numIdenticalPairs(nums)<<endl;


	return 0;



}
