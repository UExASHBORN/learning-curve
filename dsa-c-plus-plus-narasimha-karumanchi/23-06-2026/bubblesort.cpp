#include <iostream>
using namespace std;

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

int main(){
	int arr[] = {7,3,8,9,5};
	int len = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr,len);
	int k;
	for(int k=0; k<len ; k++){
		cout <<	arr[k] << " " << endl;
	}
	return 0;
}

