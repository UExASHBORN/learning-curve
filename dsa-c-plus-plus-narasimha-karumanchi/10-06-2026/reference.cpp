#include<iostream>
using namespace std;
void swap( int& , int& );
int main(){
	int x = 10 , y = 20;
	cout << "x= " << x << "\t" << "y= " << y << "\n";
	swap(x , y);
	cout << "x= " << x << "\t" << "y= " << y << endl;
	return 0;
}
void swap( int& a, int& b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}
