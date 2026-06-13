#include <iostream>
using namespace std;
int main(){
	int x=215;
	cout<<"x="<<x<<endl;
	int n=0;
	while(x!=0){
		n=(n*10)+(x%10);
		x=x/10;
	}
	x=n;
	cout<<"x="<<x<<endl;
	return 0;
}
