#include<iostream>
#include<algorithm>
#include<numeric>
#include<list>
using namespace std;
int main(){
	list<int>li;
	li.push_back(10);
	li.push_back(50);
	li.push_back(17);
	li.push_back(32);
	list<int>::iterator itr=find(li.begin(),li.end(),17);
	if(itr!=li.end()){
		cout << "found\n";
	}else{
		cout << "Not Found\n";
	}
	return 0;
}
