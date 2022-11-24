#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  // Write your code here.
  vector<int> aux; 
  // arr[x] + arr[y] = targetsum
  // return array.
  for(int i = 0; i < array.size();i++){
    for(int j = 0; j < i;j++){
      if(array[i] + array[j] == targetSum){
        aux.push_back(array[i]);
        aux.push_back(array[j]);
      }
    }
  }
  return aux;
}


