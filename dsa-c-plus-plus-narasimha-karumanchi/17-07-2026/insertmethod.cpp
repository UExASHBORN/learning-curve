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
	vector<int>::iterator itr=vi.begin();
	itr++;
	vi.insert(itr,50);
	for(vector<int>::iterator it=vi.begin(); it != vi.end(); it++){
		cout << *it << "\n";
	}
	vi.insert(itr,32);
	for(vector<int>::iterator it=vi.begin(); it != vi.end(); it++){
		cout << *it << "\n";
	}
	return 0;
}
