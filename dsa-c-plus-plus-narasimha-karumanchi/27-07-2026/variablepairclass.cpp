#include<iostream>
using namespace std;
int main(){
	int x=45;
	string s("Lucknow");
	pair<int,string> p=make_pair(x,s);
	cout << "First Value = " << p.first << "\n" ;
	cout << "Second Value = " << p.second << "\n";
	return 0;
}
