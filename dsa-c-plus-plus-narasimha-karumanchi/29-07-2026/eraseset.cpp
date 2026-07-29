#include<iostream>
#include<set>
using namespace std;
int main(){
	set<int>si;
	si.insert(10);
	si.insert(15);
	si.insert(5);
	set<int>::iterator itr=si.begin();
	while( itr!=si.end() ){
		cout << *itr << "\t";
		itr++;
	}
	cout << endl;
	itr=si.begin();
	si.erase(itr);
	while( itr!=si.end() ){
		cout << *itr << "\t";
		itr++;
	}
	cout << endl;
	return 0;
}
