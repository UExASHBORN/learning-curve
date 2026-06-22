#include <iostream>
using namespace std;
int main(){
	int arr[]={3,2,5,7,9,14,18};
	int i = 0;
	int j= (sizeof(arr)/sizeof(arr[0]))-1;
	int temp;
	cout << arr[0,1,2,3,4,5,6] << "\n";
	while(i<j){
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
	cout << arr[0,1,2,3,4,5,6] << "\n";
	return 0;
}
