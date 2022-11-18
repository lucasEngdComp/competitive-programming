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

bool DFS(vector<vector<char>> & board, string word, int i, int j, int n){
    

}

bool exist(vector<vector<char>>& board, string word) {
    string ans;
    int h = 0;
    for(int k= 0; k < board.size();k++){
        for(int p= 0; p < board[k].size();p++){
            if(word[p] == board[k][p]){
                cout << word[p];
               ans[h] = board[k][p];
               h++; 
            }
        }
    }
    int res = word.compare(ans);
    if(res == 0) return true;
    else return false;
}
void grid(vector<vector<string>>&s){
    for(int k= 0; k < s.size();k++){
        for(int p= 0; p < s[k].size();p++){
            cout<< s[k][p] << " ";
        }
    }
};

void stringS(string s){
    vector<char> s1;
    for(auto i:s){
        s1.push_back(i);
    }
    vector<char>::iterator it;
    for(it = s1.begin(); it != s1.end(); it++){
        cout << *it << " ";
    }

}

int main(){
  cin.tie(NULL);
  cout.tie(NULL);
  ios::sync_with_stdio(0);
  string s = "ABCCED";
  vector<vector<char>> s1 ={{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
  //stringS(s);
  //grid(s1);
  bool is = exist(s1,s);
  cout << is;
  return 0;
}
