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
	vi.assign(2,15);
	vector<int>::iterator itr=vi.begin();
	while ( itr != vi.end() ){
		cout << *itr << "\t";
		itr ++;
	}
	cout << endl;
	return 0;
}
