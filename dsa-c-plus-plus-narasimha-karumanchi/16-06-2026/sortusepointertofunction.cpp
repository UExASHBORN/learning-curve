#include <iostream>
using namespace std;
void asc (int* , int);
void desc (int* , int);
void sort (int* , int , void(*fp)(int* , int));
void printArray(int* , int);
int main(){
	int a[] = {5,3,7,12,9,8,6};
	int len = sizeof(a)/sizeof(int);
	printArray(a,len);
	sort(a,len,asc);
	printArray(a,len);
	sort(a,len,desc);
	printArray(a,len);
	return 0;
}
void asc(int* a, int len){
}
void desc(int* a, int len){
}
void sort(int* a, int len,void(*fp)(int*,int)){
	fp(a,len);
}
void printArray(int* a,int len){
	for(int i=0; i<len ; i++){
		cout << a [i] << "\t";
	}
	cout << endl;
}
