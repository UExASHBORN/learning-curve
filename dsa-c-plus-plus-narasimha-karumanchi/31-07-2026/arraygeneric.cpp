#include<iostream>
#include<algorithm>
#include<numeric>
using namespace std;
int main(){
	int arr[]={10,50,17,32};
	int*p=find(arr,arr+4,8);
	if(p!=arr+4){
		cout << "found\n";
	}else{
		cout << "Not Found\n";
	}
	return 0;
}
