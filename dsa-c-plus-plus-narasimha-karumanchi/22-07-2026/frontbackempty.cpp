#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector <int> vi;
	vi.push_back(10);
	vi.push_back(20);
	vi.push_back(30);
	if( !vi.empty() ){
		cout << vi.front() << "\n";
		cout << vi.back() <<"\n";
	}
	return 0;
}
