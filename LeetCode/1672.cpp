#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
		int aux = 0;
		int eux = 0;
        for(int i = 0; i < accounts.size();i++){
			for(int j = 0; j < accounts[0].size(); j++){
				aux += accounts[i][j];
			}
			eux = max(eux,aux);
			aux = 0;
		}
		
		return eux;
    }
};

int main(){
	
	Solution sol;
	
	vector<int> r1 = {(1,2,3,4,5),(1,2,3,4)};
	vector<int> result = sol.maximumWealth(r1);

	for(size_t i = 0; i < r1.size(); i++){
		cout << result[i];
	}
}
