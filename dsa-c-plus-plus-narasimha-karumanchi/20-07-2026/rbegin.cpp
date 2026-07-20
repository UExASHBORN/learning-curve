#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector <int> vi;
	vi.push_back(10);
	vi.push_back(20);
	vi.push_back(30);
	vector <int>::reverse_iterator itr=vi.rbegin();
	while(itr != vi.rend()){
		cout << *itr <<" ";
		itr ++;
	}
	cout << endl;
	return 0;
}

