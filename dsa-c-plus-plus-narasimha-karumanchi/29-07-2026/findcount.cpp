#include<iostream>
#include<set>
using namespace std;
int main(){
	set<int>si;
	si.insert(10);
	si.insert(15);
	si.insert(5);
	set<int>::iterator itr;
	itr=si.find(15);
	if( itr!=si.end() ){
		cout << *itr << "\n";
	}
	cout << si.count(5) << "\n";
	cout << si.count(98) << "\n";
	return 0;
}
