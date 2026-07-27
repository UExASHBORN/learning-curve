#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector <int> vi;
	vi.push_back(10);
	vi.push_back(20);
	vi.push_back(30);
	vector<int>::iterator itr1=vi.begin();
	vector<int>::iterator itr2=vi.end();
	itr1++;
	cout << vi.size() << "\n";
	vi.erase(itr1, itr2);
	cout << vi.size() << "\n";
	return 0;
}
