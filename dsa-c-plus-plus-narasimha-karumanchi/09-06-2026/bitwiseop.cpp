#include <iostream>
using namespace std;
int main(){
	unsigned int x = 10;
	unsigned int y = 12;
	unsigned int a = (x & y);
	unsigned int b = (x | y);
	unsigned int c = (x ^ y );
	cout << "a= " << a << "\n";
	cout << "b= " << b << "\n";
	cout << "c= " << c << endl;
	return 0;
}
