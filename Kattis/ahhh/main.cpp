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

void ahh(string doctor, string jon){
    doctor.pop_back();
    jon.pop_back();
    if(jon.size() > doctor.size()){
        cout << "no";
    }else cout << "go";
}
int main(){
  cin.tie(NULL);
  cout.tie(NULL);
  ios::sync_with_stdio(0);
  string doctor,jon;
  cin >> doctor >> jon;
  ahh(doctor,jon);
  return 0;
}
