#include <bits/stdc++.h>
#define f first
#define s second
#define sz size
#define pb push_back
#define mp make_pair
using namespace std;
#define endl '\n'
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

template < class T >
ostream& operator << (ostream& os, const vector<T>& v) {
  int quantity = 0;
  for (typename vector<T>::const_iterator ii = v.begin(); ii != v.end(); ++ii){
    quantity == 0 ? os << *ii : os << " " << *ii;
    quantity++; 
  }
  os << endl;
  return os;
}

void karte(string s){
    int i = 0;
    unordered_map<char,pair<char,int>> P[13];
    unordered_map<char,pair<char,int>> K[13];
    unordered_map<char,pair<char,int>> H[13];
    unordered_map<char,pair<char,int>> T[13];

    unordered_map<char,pair<char,int>>::iterator it;


    for(int i = 0; i < s.length(); i+2){
        if(){

        }

    }



    while(i < s.size()){
        i++;
    }
}

int main(){
  cin.tie(NULL);
  cout.tie(NULL);
  ios::sync_with_stdio(0);

//   unordered_map<char,pair<char,int>> P;
//   P.insert(mp('P',mp('0',1)));
//   unordered_map<char,pair<char,int>>::iterator it;
//   for(it = P.begin(); it != P.end(); it++){
//     cout << it->first << (it->second).first << (it->second).second;
//   }

    string s = "P01K02H03H04";
    for(int i = 0; i < s.length(); i+2){

    }

  cout << endl;
  return 0;
}
