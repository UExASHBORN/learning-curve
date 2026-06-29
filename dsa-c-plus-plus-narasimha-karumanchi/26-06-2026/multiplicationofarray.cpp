#include <iostream>
using namespace std;
int main(){
	int arr[3][2]={{2,3},{7,8},{8,1}};
	int brr[2][3]={{5,7,8},{2,3,4}};
	int rowsarr = sizeof(arr)/sizeof(arr[0]);
	int columnarr = sizeof(arr[0])/sizeof(arr[0][0]);
	int rowsbrr = sizeof(brr)/sizeof(brr[0]);
	int columnbrr = sizeof(brr[0])/sizeof(brr[0][0]);

	cout << "ROWS ARR : " << rowsarr << "\t" << "COLUMN ARR : " << columnarr << "\n" << endl;
	cout << "ROWS BRR : " << rowsbrr << "\t" << "COLUMN BRR : " << columnbrr << "\n" << endl;

	if(columnarr==rowsbrr){ //This condition checks whether the multiplication between the matrices is possible or not.
		cout << "First Matrix : " << "\n"; //The loop below is for printing out the first matrix.
		for(int i=0; i<rowsarr ; i++ ){
			for (int j=0; j<columnarr; j++ ){
				cout << arr[i][j] << "\t";
			}
			cout << endl;
		}
		cout << "\n" << "Second Matrix : " << "\n"; //The loop below is for printing out the second Matrix.
		for(int i=0; i<rowsbrr ;i++){
			for(int j=0; j<columnbrr ; j++){
				cout << brr[i][j] << "\t";
			}
			cout << endl;
		}
		cout << "\n" << "Multiplication of both Matrix :" << "\n";
		for(int i=0; i<rowsarr; i++){ //This loop is defining the row number of the new matrix.
			for(int j=0; j<columnbrr; j++){ //This loop is defining the column of new matrix.
				int mul=0; // It defines here so that for each value calculation the initial point of value assigned to mul is zero.
				for(int k=0; k<columnarr; k++){ //This loop is calculating the value of each individual element of new matrix y(m,n).
					mul += arr[i][k]*brr[k][j];
				}
				cout << mul << "\t";
			}
			cout << endl;
		}
	}else{
		cout << "Matrix is incomopatible to multiply." << endl;
	}
	return 0;
}
