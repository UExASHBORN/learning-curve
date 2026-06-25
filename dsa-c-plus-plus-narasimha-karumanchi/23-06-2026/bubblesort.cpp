#include <iostream>
using namespace std;

void printArray(int* a, int len);
void bubbleSort(int* a,int len);

int main(){
	int arr[] = {7,3,8,9,5};
	int len = sizeof(arr)/sizeof(arr[0]);
	printArray(arr,len);
	bubbleSort(arr,len);
	printArray(arr,len);
	return 0;
}

void printArray(int* a,int len){
	for(int i=0; i<len ; i++){
		cout << a[i] << "\t";
	}
	cout << "\n";
}


void bubbleSort(int* a,int len){
	int temp;
	int flag;
	for( int pass=1; pass<len ; pass++){
		flag = 0;
		for(int i=1; i<=len-pass; i++){
			if(a[i]<a[i-1]){
				flag=1;
				temp=a[i];
				a[i]=a[i-1];
				a[i-1]=temp;
			}
		}
		if(flag==0)break;
	}
}


