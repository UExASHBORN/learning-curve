#include<iostream>
using namespace std;
int main(){
	unsigned int x;
	cout << "Enter a Number: ";
	cin >> x;
	if((x&(x-1))==0){
		int pos = 0;
		while ( x!=0 ){
			pos++;
			x=x>>1;
		}
		if((pos&1)==1){
			cout << "Number is in power of 4 \n";
		}else{
			cout << "Numbe is not in power of 4 \n";
		}
	}else{
		cout << "Number is not in power of 4 \n";
	}
	return 0;
}
