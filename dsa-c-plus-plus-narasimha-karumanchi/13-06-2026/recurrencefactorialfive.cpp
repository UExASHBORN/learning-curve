#include<iostream>
using namespace std;
int fact(unsigned int);
int main(){
	unsigned int a, b;
	cin >> a;
	b = fact (a);
	cout << "Result =" << b <<endl;
	return 0;
}
int fact(unsigned int num){
	if(num == 0 || num == 1){
		return 1;
	}
	return num * fact(num-1);
}
