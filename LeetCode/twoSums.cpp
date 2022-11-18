#include <bits/stdc++.h>
#include <cmath>
using namespace std;

class Solution {
	public:
		vector<int> twoSum(vector<int>& nums, int target) {
			int len = nums.size();
			for(int i = 0; i < len; i++){
				for(int j = i + 1; j < len; j++){
					if ( nums[j] == target - nums [i])return {i,j};
				}
			}
			return {-1,-1};
		}
		
		
};

int main(){
	
	Solution sol;
	vector<int> nums = {2,7,11,15};
	vector<int> pair = sol.twoSum(nums,9);
	cout << pair[0] << " " << pair [1];
	
	
	return 0;
}      
