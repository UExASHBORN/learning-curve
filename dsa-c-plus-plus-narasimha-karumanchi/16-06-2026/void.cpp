#include<iostream>
using namespace std;
int main(){
	void* p;
	int x = 10;
	p = &x;
//	int k = *p;
	int k = *((int*)p);
	cout << "k = " << k << endl;
	return 0;
}
