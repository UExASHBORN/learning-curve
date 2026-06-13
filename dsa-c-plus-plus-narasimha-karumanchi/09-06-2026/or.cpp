#include <iostream>
using namespace std;
int main(){
	int x=10, y=20, z=30;
	cout << "x_" << x << "\ty=" << y << "\tz=" << z << endl;
	int a = (++x < ++y) || (++y < ++z);
	cout << "x=" << x << "\ty=" << y << "\tz=" << z << endl;
	cout << "a= " << a << endl;
	return 0;
}
