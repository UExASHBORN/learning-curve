#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> vi;
	cout << vi.size() << "\n";
	vi.push_back(10);
	vi.push_back(20);
	vi.push_back(25);
	vector <int> vit(vi.begin(),vi.end()-1);
	for(vector<int>::iterator it=vit.begin(); it != vit.end(); it++){
		cout << *it << "\n";
	}
	return 0;
}
