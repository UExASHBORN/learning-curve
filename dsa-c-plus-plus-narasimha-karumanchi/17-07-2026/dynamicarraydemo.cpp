#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> vi;
	cout << vi.size() << "\n";
	vi.push_back(10);
	vi.push_back(20);
	vi.push_back(25);
	for(vector<int>::iterator it=vi.begin(); it != vi.end(); it++){
		cout << *it << "\n";
	}
	return 0;
}
