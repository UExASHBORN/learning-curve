#include<iostream>
using namespace std;
int main(){
	int x = 10;
	const int y = 20;
	cout << "x = " << x << "y = " << y << "\n";
	x =15;
//	y =25; couldn't change it because it had become read only
	cout << "x = " << x << "y = " << y << endl;
	return 0;
}
