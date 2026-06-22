#include <iostream>
using namespace std;
int main(){
	int arr[] = {3,5,2,8,7,15,1};
	int len = sizeof(arr)/sizeof(arr[0]);
	cout << "Length =" << len << "\n";
	cout << "arr[2] = " << arr[2] << "\n";
	arr[2] = 75;
	cout << "arr[2] = " << arr[2] << "\n";
	for(int i = 0; i < len; i++){
		cout << arr[i] << "\t";
	}
	cout << endl;
	return 0;
}
