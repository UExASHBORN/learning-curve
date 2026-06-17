#include<iostream>
using namespace std;
int main(){
	void* p;
	float f = 3.2f;
	p = &f;
//	float ft = *p;
	float ft = *((float*)p);
	cout << "ft = " << ft << endl;
	return 0;
}
