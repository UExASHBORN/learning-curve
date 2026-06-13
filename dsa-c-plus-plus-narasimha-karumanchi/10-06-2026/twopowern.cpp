#include<iostream>
using namespace std;
int main(){
	unsigned int x;
	cout << "Enter a Number: ";
	cin >> x;
	if((x&(x-1))==0){
		cout << "Number is in powerof 2 \n";
	}else{
		cout << "Number is not in power of 2 \n";
	}
	return 0;
}
