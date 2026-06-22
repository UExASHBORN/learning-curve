#include <iostream>
using namespace std;

void printArray(int arr[], int len);

int main(){
	int arr[]={3,2,5,7,9,14,18};
	int len = sizeof(arr)/sizeof(arr[0]);
	printArray(arr,len);
	return 0;
}
void printArray(int arr[], int len){
//	int length = sizeof(a)/sizeof(a[0]);
	for(int i=0; i<len; i++){
		cout << arr[i] << "\t";
	}
	cout << endl;
}
