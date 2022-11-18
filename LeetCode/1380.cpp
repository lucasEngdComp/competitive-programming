#include <bits/stdc++.h>
using namespace std;

#define MAX 80
int main()
{
    // Initializing 2D vector "vect" with
    // values
    vector<vector<int> > matrix = { { 1,2,3,4,5 },
                               { 6,7,8,9,10 },
                               { 90,20,16,15,11 },
                                  {14,13,12,17,21},
                                  {35,28,27,23,22}};
        vector<int> maxCol;

        for(int j = 0; j < matrix.size(); j++){
            int max = INT_MIN;
            for(int i = 0; i < matrix.size(); i++)
                if(matrix[i][j] > max)
                    max = matrix[i][j];
            maxCol.push_back(max);
        } 
        
        for(int j = 0; j < maxCol.size(); j++){
				cout<< maxCol[j] << " ";
			}cout<< endl;

		cout << " --------------------------------";

		for(int i = 0; i < matrix.size(); i++){
			for(int j = 0; j < matrix.size(); j++){
				cout<< matrix[j][i] << " ";
			}cout<< endl;
		}
		
		cout << " --------------------------------";
		int res;
		for(int j = 0; j < matrix.size(); j++)
            for(int i = 0; i < matrix.size(); i++)
            if(matrix[i][j] == *min_element(matrix[i].begin(),matrix[i].end()) && matrix[i][j] == maxCol[j])
				res = matrix[i][j];
		
		cout << " o valor é : " << res;

    return 0;
}
