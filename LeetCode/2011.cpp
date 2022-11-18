#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(int i = 0; i < operations.size();i++){
			if(operations[i] == "++X") x+=1;
			else if (operations[i] == "X++") x+=1;
			else if (operations[i] == "--X") x-=1;
			else if (operations[i] == "X--") x-=1;
			else
				continue;
		}
		return x;
    }
};


int main(){

	Solution sol;
	
	vector<string> r1 = {"X++","++X","--X","X--"};
	
	vector<int> result = sol.finalValueAfterOperations(r1);

	for(size_t i = 0; i < result.size(); i++){
		cout << result[i];
	}


}
