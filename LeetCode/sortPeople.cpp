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
vector<string> sortPeople(vector<string> &names,vector<int>& h) {
    vector<pair<int,string>> ans;
    for(int i = 0; i < names.size(); i++){
        ans.push_back({h[i],names[i]});
    }
    sort(ans.rbegin(), ans.rend());

    vector<string> greatest;
    for(size_t i =0; i < names.size(); i++){
        greatest.push_back(ans[i].second);
    }
    return greatest;

}



int main(){
  cin.tie(NULL);
  cout.tie(NULL);
  ios::sync_with_stdio(0);
  vector<string> s= {"Mary","John","Emma"};
  vector<int> v = {180,165,170};
  vector<string> ans = sortPeople(s,v);
  for(auto i=0; i < ans.size();i++){
    cout << ans[i] << " ";
  }
  return 0;
}
