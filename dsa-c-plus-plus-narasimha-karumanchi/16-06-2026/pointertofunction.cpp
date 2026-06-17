#include<iostream>
using namespace std;
int add(int,int);
int mux(int,int);
int main(){
	int(*fp)(int,int);
	fp=&add; // OR fp = add;
	cout <<"Addition = " << fp(2,5) << "\n";
	fp = &mux; // OR fp =mux;
	cout << "multiplication = " << fp(2,5) << "\n";
	return 0;
}
int add(int x, int y){
	return x+y;
}
int mux( int x, int y){
	return x*y;
}
