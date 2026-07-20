#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector <int> vi;
	vi.push_back(10);
	vi.push_back(20);
	vi.push_back(30);
	vi.push_back(40);
	cout << vi.size() << "\n";
	for(vector <int>::iterator itr=vi.begin(); itr!= vi.end(); itr++){
		cout << *itr <<" ";
	}
	cout<<endl;
	vi.resize(3);
	cout << vi.size() << "\n";
	for(vector <int>::iterator itr=vi.begin(); itr!= vi.end(); itr++){
		cout << *itr <<" ";
	}
	cout<<endl;
	vi.resize(15);
	cout << vi.size() << "\n";
	for(vector <int>::iterator itr=vi.begin(); itr!= vi.end(); itr++){
		cout << *itr <<" ";
	}
	cout<<endl;
	vi.resize(25, 10);
	cout << vi.size() << "\n";
	for(vector <int>::iterator itr=vi.begin(); itr!= vi.end(); itr++){
		cout << *itr <<" ";
	}
	cout<<endl;
	return 0;
}
