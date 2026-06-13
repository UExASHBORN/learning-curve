#include <iostream>
using namespace std;
int main(){
	unsigned int x = 10;
	int count = 0;
	while(x != 0){
		if((x & 1) == 1) count++;
		x = x >> 1;
	}
	cout << "Number of ones = " << cout << endl;
	return 0;
}
