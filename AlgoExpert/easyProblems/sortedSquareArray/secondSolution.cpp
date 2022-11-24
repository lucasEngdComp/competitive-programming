#include <vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> sortedSquaredArray(vector<int> array) {
  // Write your code here.
  // square  =  x * x
  vector<int>ans;
  for(int i = 0; i < array.size();i++){
      int m = array[i] * array [i];
      ans.push_back(m);
  }
  sort(ans.begin(),ans.end());
  return ans;
}
