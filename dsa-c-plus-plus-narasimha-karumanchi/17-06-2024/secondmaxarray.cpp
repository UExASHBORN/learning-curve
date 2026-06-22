#include <iostream>
using namespace std;
int main(){
	int arr[]={3,5,2,8,7,15,1};
	int len = sizeof(arr)/sizeof(arr[0]);
	int max = arr[0];
	int smax = arr[0];
	for (int i=1; i<len ; i++){
		if(arr[i] > max){
			smax = max;
			max = arr[i];
		}else if(arr[i] > smax){
			smax = arr[i];
		}
	}
	cout << "Second max Value = " << smax << endl;
	return 0;
}
