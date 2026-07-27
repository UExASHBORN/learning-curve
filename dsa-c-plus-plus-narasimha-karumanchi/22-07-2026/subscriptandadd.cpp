#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector <int> vi;
	vi.push_back(10);
	vi.push_back(20);
	vi.push_back(30);
	cout << vi[1] << "\n";
	cout << vi.at(0) << "\n";
	return 0;
}
