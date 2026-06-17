#include<iostream>
using namespace std;
int power(unsigned int, unsigned int);
int main(){
	unsigned int x, n, result;
	cin >> x >> n;
	result = power (x,n);
	cout << "Result =" << result << endl;
	return 0;
}
int power(unsigned int x,unsigned int n){
	if(n == 0) return 1;
	if(n == 1) return x;
	return x*power(x,n-1);
}
