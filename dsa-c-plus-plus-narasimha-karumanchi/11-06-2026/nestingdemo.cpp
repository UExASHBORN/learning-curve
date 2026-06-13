#include <iostream>
using namespace std;
int main(){
	int a=10, b=20, c=30;
	if(a>b)if(b>c)if(c>a){
		cout << "A staatement\n";
	}else{
		cout << "B statement\n";
	}else{
		cout << "C statement\n";
	}else{
		cout << "D statement\n";
	}
	cout << endl;
	return 0;
}
