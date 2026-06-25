#include <iostream>
using namespace std;

void printArray(int* a, int len);
int binarySearch(int* a,int si,int li,int key);

int main(){
	int arr[] = {2,10,15,21,23,32,39,41,46};
	int key = 41;
	int len=sizeof(arr)/sizeof(arr[0]);
	printArray(arr,len);
	int resultIndex = binarySearch(arr,0,len-1,key);
	if(resultIndex != -1){
		cout << "Element : " << key << "\t" <<  "Found at index: " << resultIndex << "\n";
	} else {
		cout << "Element : " << key << "\t" << "Not found in the array. \n";
	}
	return 0;
}


void printArray(int* a, int len){
	for(int i=0;i<len;i++){
		cout << a[i] << "\t";
	}
	cout << "\n";
}

int binarySearch(int* a, int si, int li, int key){
	if( si <= li){
		int mid = (si + li)/2;
		if( a[mid] == key){
			return mid;
		}else if(a [mid] < key){
			return binarySearch(a,mid + 1,li,key);
		}else{
			return binarySearch(a,si,mid-1,key);
		}
	} 
	return -1;
}

