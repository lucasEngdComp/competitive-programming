#include <bits/stdc++.h>


using namespace std;

void solve(){

	
};

int main(){
	int score [10];
	
	for ( int i = 0; i < 10; i++){
		score[i]  = i * 10;
	}
	
	for ( int j = 0; j < 10; j++){
			cout << score[j] << endl;
	}

	cout << " ____________________________ ";

	vector<int> vec;
	
	// fill the vector with 12, 7 times.
	vec.assign(7,12);
	
	cout << " The vector elements are ";
	for(int i = 0; i < 7; i++){
		cout << vec[i] << " " << endl;
	}
	// add last position of vector
	vec.push_back(24);
	
	// add begin vec
	vec.insert(vec.begin(),5);
	
	for(int i = 0; i < vec.size(); i++){
		cout << vec[i] << " " << endl;
	}
	
	// remove from begin vector.
	vec.erase(vec.begin());
	
	for(int i = 0; i < vec.size(); i ++){
			cout << vec[i] << " ";  
	}
	
	// add a begin vec.
	vec.emplace(vec.begin(),5); 
	
	cout << " the first element  " << vec[0] << endl;
	
	vec.emplace_back(20);
	
	int j  = vec.size();
	cout <<  " vector sze after clear()" << vec[j-1] << endl;
	
	
	vector<int> ob, ab;
	
	ob.push_back(2);
	ob.push_back(3);
	ab.push_back(4);
	ab.push_back(5);
	ab.push_back(6);
	
	
	cout << " vector 1 " << endl;
	
	for ( int i = 0; i < ob.size(); i++){
		cout << ob[i] << " ";
	}
	
	cout << " vector 2 " << endl;
	
	for( int k = 0; k < ab.size(); k++){
		cout << ab[k] << " ";
	}
	
	ob.swap(ab);
	
	
	cout << "nAfter Swap nVector 1: "; 
    for (int i = 0; i < ob.size(); i++) {
        cout << ob[i] << " "; 
	}
    cout << "nVector 2: "; 
    for (int i = 0; i < ab.size(); i++) {
        cout << ab[i] << " ";
	}
	
	
	
	
	

	
	return 0;
	
}
