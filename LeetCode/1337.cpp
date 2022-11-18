#include <bits/stdc++.h>
using namespace std;

#define MAX 80
int main()
{
    // Initializing 2D vector "vect" with
    // values
    vector<vector<int> > vect = { { 1,1,0,0,0 },
                               { 1,1,1,1,0 },
                               { 1,0,0,0,0 },
                                  {1,1,0,0,0},
                                  {1,1,1,1,1}};

    // Displaying the 2D vector
//    for (int i = 0; i < vect.size(); i++) {
//        sort(vect[i].rbegin(), vect[i].rend());
//        for (int j = 0; j < vect[i].size(); j++)
//            cout << vect[i][j] << " ";
//        cout << endl;
//    }
//
    vector<int> temp;
    int count = 0;
    for(int i = 0; i < vect.size();i++){
        for(int j = 0; j < vect[i].size();j++){
            if(vect[i][j] == 1) {
                count += 1;
            }
        }
        temp.push_back(count);
        count = 0;
    }


    vector<int> aux;
    int minus = temp[0];
    for(int i = 1; i < temp.size(); i++){

        if(minus < temp[i]) { // 2 <  4
            aux.push_back(i);
        }else{
            minus = temp[i];
        }
    }


    int k;
    cin >> k;
    for(int i = 0; i < k; i++){
        cout<< aux[i];
    }
    return 0;
}
