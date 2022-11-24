#include <bits/stdc++.h>
using namespace std;

vector<int> sortedSquaredArray(vector<int> array) {
  // Write your code here.
  // square  =  x * x
  vector<int>ans(array.size());
  int i = ans.size() -1, left = 0, right = array.size() -1;
  while(left <= right){
    ans[i--] = abs(array[left]) >= abs(array[right]) ? pow(array[left++],2):pow(array[right--],2);
  }
  return ans;
}
