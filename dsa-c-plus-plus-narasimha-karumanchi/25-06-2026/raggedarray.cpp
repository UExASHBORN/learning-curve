#include <iostream>
using namespace std;
int main(){
	int arr[][5]={{1,2,3,4,5},{2,4,6,8},{1,3,5,7,9},{10,20}};
	int rows= sizeof(arr)/sizeof(arr[0]);
	int cols= sizeof(arr[0])/sizeof(arr[0][0]);
	cout << sizeof(arr) << endl;
	cout << sizeof(arr[0]) << endl;
	cout << sizeof(arr[0][0]) << endl;
	cout << "rows : " << rows << "\t" << "columns : " << cols << endl;
	for(int i=0; i<4 ; i++ ){
		for (int j=0; j<5; j++ ){
			cout << arr[i][j] << "\t";
		}
		cout << "\n";
	}
	return 0;
}
