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



bool isValid1(string s) {
    stack<char> stack;
    for(int i=0; i< s.length() ; i++)
    {
        if(!stack.empty())
        {
            if(stack.top()=='(' && s[i]==')' || stack.top()=='[' && s[i]==']' || stack.top()=='{' && s[i]=='}')
            {
                stack.pop();
                continue;
            }
        }
        stack.push(s[i]);
    } 
    if(stack.empty()) 
        return true;
    return false;
}




int main(){
  string s = "()[]{}";
  bool ans = isValid1(s);
  cout << ans;


  return 0;
}