#include<iostream>
using namespace std;
int main(){
	int x = 10;
	const int y = 20;
	cout << "x = " << x << "y = " << y << "\n";
	const int* p = &x;
	const int* q = &y;
	// *p =15;
	// *q = 25;
//	y =25; couldn't change it because it had become read only
	cout << "x = " << x << "y = " << y << endl;
	return 0;
}
