#include<iostream>
using namespace std;
int main(){
	int* p = new int;
	*p = 20;
	cout << "Value = " << *p << endl;
	cout << "Size = " << sizeof(p) << endl;
	return 0;
}
