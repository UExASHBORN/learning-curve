#include<iostream>
#include<list>
using namespace std;
int main(){
	list <int> li;
	li.push_front(10);
	li.push_front(20);
	li.push_front(30);
	list <int> le;
	le.push_back(30);
	le.push_back(20);
	le.push_back(10);
	list<int>::iterator itr=li.begin();
	while( itr!=li.end() ){
		cout << *itr << "\n";
		itr ++;
	}
	cout << "\n";
	list<int>::iterator it=le.begin();
	while( it != le.end() ){
		cout << *it << "\n";
		it ++;
	}
	cout << "\n";
	cout << li.size() << "\t" << le.size() << "\n";
	cout << li.max_size() << "\t" << le.max_size() << "\n";
	li.resize(10);
	cout << li.size() << "\t" << le.size() << "\n";
	le.resize(10,25);
	cout << li.size() << "\t" << le.size() << "\n";
	cout << li.empty() << "\t" << le.empty()<< "\n";
	return 0;
}
