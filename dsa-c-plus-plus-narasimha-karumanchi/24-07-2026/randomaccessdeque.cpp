#include<iostream>
#include<list>
#include<deque>
using namespace std;
int main(){
	deque<char> de;
	de.push_back('l');
	de.push_back('i');
	de.push_back('s');
	de.push_back('t');
	deque<char>::iterator itr=de.begin();
	while( itr!=de.end() ){
		cout << *itr << "\t";
		itr++;
	}
	cout << endl;
	cout << "Random Access: " << de[1] << "\t" << de.at(1) << endl;
	return 0;
}
