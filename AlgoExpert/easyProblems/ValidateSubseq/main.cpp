#include <bits/stdc++.h>
using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
  int hold = 0;
  for(int i = 0; i < array.size(); i++){
    if(sequence.size() == 0) break; // non sequence
    if(sequence[hold] == array[i])
      hold++;
  }

  return hold == sequence.size();
}
