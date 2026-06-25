#include<iostream>
using namespace std;

void printArray(int* a,int len);
void insertionSort(int* a, int len);

int main(){
	int arr[]={5,7,2,8,3,9};
	int length = sizeof(arr)/sizeof(arr[0]);
	printArray(arr,length);
	insertionSort(arr,length);
	printArray(arr,length);
	return 0;
}

void insertionSort(int* a,int len){
	int temp;
	for(int i = 1; i < len ; i++ ){
		temp=a[i];
		int j= i-1;
		while(j>=0&&temp<=a[j]){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
}

void printArray(int* a, int len){
	for(int i=0; i<len; i++){
		cout << a[i] << "\t";
	}
	cout << endl;
}
