#include <iostream>
using namespace std;
int main(){
	int arr[]={3,2,5,7,9,14,18};
	cout << *arr << "\n";
	cout << *(arr + 1) << "\n";
//	arr++; Throws Error
	cout << 1[arr] << "\n";
	cout << arr[arr[1]] << "\n";
	return 0;
}
