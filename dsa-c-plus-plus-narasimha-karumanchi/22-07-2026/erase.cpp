#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector <int> vi;
	vi.push_back(10);
	vi.push_back(20);
	vi.push_back(30);
	vector<int>::iterator itr=vi.begin();
	itr++;
	cout << *itr << "\n";
	vi.erase(itr);
	cout << *itr << "\n";
	return 0;
}
