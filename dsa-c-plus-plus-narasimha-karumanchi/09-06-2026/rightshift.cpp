#include <iostream>
using namespace std;
int main(){
	unsigned int x = 10;
	unsigned int a = x >> 1;
	unsigned int b = x >> 2;
	unsigned int c = x >> 3;
	cout << "a= " << a << "\n";
	cout << "b= " << b << "\n";
	cout << "c= " << c << "\n";
	cout << "x= " << x << endl;
	return 0;
}
