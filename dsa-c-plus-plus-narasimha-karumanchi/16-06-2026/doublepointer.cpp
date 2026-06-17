#include<iostream>
using namespace std;
int main(){
	int x = 10;
	int* p = &x;
	int** dp = &p;
	int*** tp = &dp;
	cout << "x = " << ** dp << endl;
	int y =20;
	*dp = &y;
	cout << "y = " << **dp << endl;
	cout << "y = " << ***tp << endl;
	return 0;
}
