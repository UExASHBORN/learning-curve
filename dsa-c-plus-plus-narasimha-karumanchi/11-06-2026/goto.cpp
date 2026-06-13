#include <iostream>
using namespace std;
int main(){
	cout << "begining of main\n";
	goto ab;
	cout << "After ab\n";
	ab:
	cout << "Just before return\n";
	return 0;
}
