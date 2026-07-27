#include<iostream>
#include<list>
#include<deque>
using namespace std;
int main(){
	list<char> li;
	li.push_back('l');
	li.push_back('i');
	li.push_back('s');
	li.push_back('t');
	list<char>::iterator itr=li.begin();
	while( itr!=li.end() ){
		cout << *itr << "\t";
		itr++;
	}
	cout << endl;
	cout << "Random Access: " << li[1] << "\t" << li.at(1) << endl;
	return 0;
}
