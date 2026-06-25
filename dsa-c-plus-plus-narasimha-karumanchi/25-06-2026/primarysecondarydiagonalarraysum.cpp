#include <iostream>
using namespace std;

int main(){
	int arr[4][4]={{1,2,3,4},{2,4,6,8},{1,3,5,7},{10,20,30,40}};
	int rows= sizeof(arr)/sizeof(arr[0]);
	int cols= sizeof(arr[0])/sizeof(arr[0][0]);
	cout << sizeof(arr) << endl;
	cout << sizeof(arr[0]) << endl;
	cout << sizeof(arr[0][0]) << endl;
	cout << "rows : " << rows << "\t" << "columns : " << cols << endl;
//	for(int i=0; i<4 ; i++ ){
//		for (int j=0; j<4; j++ ){
//			if( arr[i]==arr[j]){
//				cout << arr[i][j] << endl;
//			}
//		}
//		cout << "\n";
//	}
	int pds = 0;
	int sds = 0;
	for (int i=0; i<rows ; i++){
		pds+=arr[i][i];
	}
	for(int i=0; i<rows; i++){
		sds+=arr[i][rows-1-i];
	}
	cout << pds << endl;
	cout << sds << endl;
	return 0;
}
