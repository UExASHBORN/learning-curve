#include <iostream>
using namespace std;
int main(){
	int arr[]={3,2,5,7,9,14,18};
	int length = sizeof(arr)/sizeof(arr[0]);
	printArray(arr,length);
	runningSum(arr,length);
	printArray(arr,length);
	return 0;
}
void runningSum(int* a, int len){
}
void printArray(int* a, int len){
	for(int i=0; i<length; i++){
		cout << arr[i] << "\t";
	}
	cout << endl;
}
