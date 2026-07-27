#include<iostream>
#include<list>
using namespace std;
int main(){
	list <int> li;
	li.push_front(10);
	li.push_front(20);
	li.push_front(30);
	list<int>::const_iterator itr=li.begin();
	*itr=50;
	while( itr!=li.end() ){
		cout << *itr << "\n";
		itr ++;
	}
	cout << "\n";
	return 0;
}
