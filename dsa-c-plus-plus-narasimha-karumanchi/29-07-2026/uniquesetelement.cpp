#include<iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
	vector<int>vi;
	for(int i=0; i<10 ; i++ ){
		vi.push_back(i);
		vi.push_back(i);
	}
	cout << vi.size() << "\n";
	set<int>si(vi.begin(),vi.end());
	cout << si.size() << "\n";
	return 0;
}
