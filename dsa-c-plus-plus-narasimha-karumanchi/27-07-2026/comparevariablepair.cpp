#include<iostream>
using namespace std;
int main(){
	pair <int,int> p(10,50);
	pair <int,int> pa(5,40);
	pair <int,int> pt(10,50);
	cout << "p less then pa = " << (p<pa) << "\n" ;
	cout << "p equal to pa = " << (p==pa) << "\n";
	cout << (pa<p) << endl;
	cout << (pa<pt) << endl;
	return 0;
}
