#include <iostream>
using namespace std;
int LinearSearch(int* a, int len, int key){
	for(int i=0; i<len; i++){
		if(a[i]==key)return i;
	}
	return -1;
}
int main(){
	int arr[] = {2,3,4,5,6,7,14,10};
	int length = sizeof(arr)/ sizeof(arr[0]);
	cout << "Length: " << length << "\n";
	int key = 14;
	int index = LinearSearch(arr, length, key);
	if (index != -1){
		cout << "Element :" << key  << "\t" << "found at index: " << index << "\n";
	} else {
		cout << "Element :" << key  << "\t" << "not found.\n";
	}
	return 0;
}

