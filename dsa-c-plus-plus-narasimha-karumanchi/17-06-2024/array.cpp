#include <iostream>
using namespace std;
int* sumdiff (int x, int y){
	int* result = new int[2];
	result[0] = x + y;
	result[1] = (x >= y)?(x-y):(y-x);
	return result;
}
int main(){
	int a, b;
	cout << " Enter two integer's : \n";
	cin >> a >> b ;
	int* arr = sumdiff(a, b);
	cout << "Sum = " << arr[0] << "\n";
	cout << "Diff = " << arr[1] << endl;
	return 0;
}
