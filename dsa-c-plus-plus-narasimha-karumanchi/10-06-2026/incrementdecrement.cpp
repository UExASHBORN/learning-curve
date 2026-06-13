#include<iostream>
using namespace std;
int main(){
	unsigned int x=10, y=20;
	int a , b;
	a = ++x;
	b = y++;
	cout << "x= " << x << "\n";
	cout << "y= " << y << "\n";
	cout << "a= " << a << "\n";
	cout << "b= " << b << "\n";
	return 0;
}
