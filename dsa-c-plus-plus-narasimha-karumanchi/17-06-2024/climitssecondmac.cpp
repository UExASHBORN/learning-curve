#include <climits>
#include <iostream>
using namespace std;
int main(){
	int arr[]={20,3,5,2,8,7,15,1};
	int len = sizeof(arr)/sizeof(arr[0]);
	int max = INT_MIN;
	int smax = INT_MIN;
	for (int i=0; i<len ; i++){
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
