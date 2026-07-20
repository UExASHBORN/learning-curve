#include<iostream>
#include<list>
using namespace std;
int main(){
	list<int> vi;
	cout << vi.size() << "\n";
	vi.push_front(10);
	vi.push_front(20);
	vi.push_front(25);
	for(list<int>::iterator it=vi.begin(); it != vi.end(); it++){
		cout << *it << "\n";
	}
	return 0;
}
