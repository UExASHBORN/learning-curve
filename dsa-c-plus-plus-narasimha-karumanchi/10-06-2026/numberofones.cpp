#include<iostream>
using namespace std;
int main(){
	unsigned int x;
	cout << "Enter a Number: ";
	cin >> x;
	int count = 0;
	while(x!=0){
		count++;
		x=x&(x-1);
	}
	cout << "Number of ones = " << count << endl;
	return 0;
}
