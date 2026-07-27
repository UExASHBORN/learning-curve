#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector <int> vi;
	vi.push_back(10);
	vi.push_back(20);
	vi.push_back(30);
	vi.push_back(40);
	vector<int> v;
	v.push_back(50);
	v.push_back(70);
	v.push_back(90);
	vi.swap(v);
	vector<int>::iterator itr=v.begin();
	while ( itr != v.end() ){
		cout << *itr << "\t";
		itr ++;
	}
	cout << endl;
	return 0;
}
