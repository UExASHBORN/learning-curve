#include <iostream>
using namespace std;

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

int main(){
	int arr[] = {2,10,15,21,23,32,39,41,46};
	int key = 41;
	int 
	binarySearch();
	cout << "element at index " << key << "\n";
	return 0;
}

