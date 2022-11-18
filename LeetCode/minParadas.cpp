

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

int minParada(int dist, int km, int paradas, vector<int>& pos){
  int count = 0;
  for(int i = 0; i< pos.size(); i++){
    km = km - pos[i]; 
    if(km < pos[i+1]){
      km = km + pos[i+1];
      count++;
    }else{
      continue;
    }
  }

  return count;

}

int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(0);
    vector<int> v1 ={200,375,550,750};
    int ans = minParada(950,400,4,v1);
    cout << ans;
    return 0;
}

