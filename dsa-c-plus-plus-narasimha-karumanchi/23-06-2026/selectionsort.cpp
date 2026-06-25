#include<iostream>
using namespace std;

void printArray(int* a,int len);
void selectionSort(int* a, int len);

int main(){
	int arr[]={5,3,2,8,1,6};
	int length = sizeof(arr)/sizeof(arr[0]);
	printArray(arr,length);
	selectionSort(arr,length);
	printArray(arr,length);
	return 0;
}

void selectionSort(int* a,int len){
	int temp, minindex;
	for(int pass = 0; pass < len-1; pass++){
		minindex = pass;
		for(int i= pass; i<len ; i++){
			if(a[i]<a[minindex]){
				minindex=i;
			}
		}
		temp=a[pass];
		a[pass]=a[minindex];
		a[minindex]=temp;
	}
}

void printArray(int* a, int len){
	for(int i=0; i<len; i++){
		cout << a[i] << "\t";
	}
	cout << endl;
}
