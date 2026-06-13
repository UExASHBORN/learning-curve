#include <iostream>
using namespace std;
int main(){
	unsigned int x = 10;
	if((x & 1) == 1){
		cout << "x is odd \n";
	}else{
		cout << "x is even \n";
	}
	return 0;
}
