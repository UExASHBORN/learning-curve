#include <iostream>
using namespace std;
int main(){
	int arr[3][3]={{2,3,5},{7,8,9},{8,1,4}};
	for(int i=0; i<3 ; i++ ){
		for (int j=0; j<3; j++ ){
			cout << arr[i][j] << "\t";
		}
		cout << "\n";
	}

	for(int i=0; i<3; i++){
		for(int j=0; j<=i;j++){
			swap(arr[i][j],arr[j][i]);
			}
	}
	cout << "\n";
	for(int i=0; i<3 ; i++ ){
		for (int j=0; j<3; j++ ){
			cout << arr[i][j] << "\t";
		}
		cout << "\n";
	}

	return 0;
}
