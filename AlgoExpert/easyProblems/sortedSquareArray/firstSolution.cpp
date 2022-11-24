#include <bits/stdc++.h>
using namespace std;

vector<int> sortedSquaredArray(vector<int> array) {
  vector<int> sort;
  // [menor ............. maior]
  int menor_elemento_index = 0; // posição inicial
  int maior_element_index = array.size() -1; // ultima posição

  for(int k = array.size() - 1; k >= 0; k++){
    int menor = array[menor_elemento_index];
    int maior = array[maior_element_index];

    if(abs(menor) > abs(maior)){
        sort[k] = menor * menor;
        menor_elemento_index++; // avanço uma casa no array
    }else{
        sort[k] = maior * maior;
        maior_element_index--; // volto uma casa no array
    }
  }
  return sort;
}
