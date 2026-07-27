#include<iostream>
#include<list>
using namespace std;
int main(){
	list <int> li;
	li.push_back(10);
	li.push_back(20);
	li.push_back(30);
	list<int>::iterator itr=li.begin();
	while( itr!=li.end() ){
		cout << *itr << "\n";
		itr ++;
	}
	cout << "\n";
	return 0;
}
