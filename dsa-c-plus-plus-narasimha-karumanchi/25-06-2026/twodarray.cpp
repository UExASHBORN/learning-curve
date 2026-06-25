#include <iostream>
using namespace std;
int main(){
	int arr[4][5]={{1,2,3,4,5},{2,4,6,8,10},{1,3,5,7,9},{10,20,30,40,50}};
	for(int i=0; i<4 ; i++ ){
		for (int j=0; j<5; j++ ){
			cout << arr[i][j] << "\t";
		}
		cout << "\n";
	}
	return 0;
}
