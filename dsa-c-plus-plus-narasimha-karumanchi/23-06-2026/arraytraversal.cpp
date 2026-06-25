#include <iostream>
using namespace std;
int main(){
	int arr[]={3,2,5,7,9,14,18};
	int i = 0;
	int length = sizeof(arr)/sizeof(arr[0]);
	int j = length - 1;
	int temp;
	
	for(int k=0; k < length ; k++){
		cout << arr[k] << " ";
	}
	cout << "\n";

	while(i<j){
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}

	for(int k=0 ; k < length ; k++){
		cout << arr[k] << " ";
	}
	cout << "\n";
	
	return 0;
}
