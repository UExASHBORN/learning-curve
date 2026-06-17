#include<iostream>
using namespace std;
int main(){
	int x = 10;
	int* p = &x;
	int k = *p;
	*p = 20;
	cout << "x = " << x << "k = " << k << endl;
	return 0;
}
