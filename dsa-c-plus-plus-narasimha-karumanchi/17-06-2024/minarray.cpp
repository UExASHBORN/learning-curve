#include <iostream>
using namespace std;
int main(){
	int arr[]={3,5,2,8,7,15,1};
	int len = sizeof(arr)/sizeof(arr[0]);
	int min = arr[0];
	for (int i=1; i<len ; i++){
		if(min > arr[i]){
			min = arr[i];
		}
	}
	cout << "Min Value = " << min << endl;
	return 0;
}
