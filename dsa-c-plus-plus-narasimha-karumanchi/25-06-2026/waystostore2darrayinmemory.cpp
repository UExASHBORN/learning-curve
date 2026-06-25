#include <iostream>
using namespace std;
int main(){
	int arr[][5]={{1,2,3,4,5},{2,4,6,8},{1,3,5,7,9},{10,20}};
	cout << *(*(arr+2)+4) << endl;
	cout << *(*arr) << endl;
	cout << *(*arr+2) << endl;
	cout << *(*(arr+2)+2) << endl;
	cout << *(*arr+5) << endl;
	return 0;
}
