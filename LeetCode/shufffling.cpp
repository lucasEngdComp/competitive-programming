

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

int main(){
    int size = 0;
    string method = "";

    cin >> size >> method;
    vector<int> arr = {};
    for (int i = 0; i < size; i++) {
        arr.push_back(i);
    }
    vector<int> copy = arr;

    int half = ceil((arr.size()) / 2);

    if (method == "out") {
        for (int i = 0; i < half; i++){
            cout << arr[i] << arr[i + half];
            if (i == half - 1 && arr.size() % 2 != 0) {
                
            }
        }
        cout << endl;
    } else {
        for (int i = 0; i < half; i++){
            cout << arr[i + half] << arr[i];
        }
        cout << endl;
    }

}