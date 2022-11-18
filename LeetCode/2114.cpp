
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        long maxSpaceCount = 0;

		for (const auto& s : sentences)
		  maxSpaceCount = max(maxSpaceCount, count(begin(s), end(s), ' '));

		return maxSpaceCount + 1;
  }
};

int main(){

	Solution sol;
	
	vector<string> r1 = {"X++","++X","--X","X--"};
	
	vector<int> result = sol.mostWordsFound(r1);
	
	for(size_t i = 0; i < result.size(); i++){
		cout << result[i];
	}


}
