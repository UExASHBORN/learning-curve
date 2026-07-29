#include<iostream>
#include<map>
using namespace std;
int main(){
	map<string,int>mp;
	mp["Ajay"]=20;
	mp["Sumit"]=30;
	mp["Akshay"]=15;
	mp["Sumit"]=40;
	mp["Ajay"]++;
	cout << mp["Sumit"] << "\n";
	cout << mp["Ajay"] << "\n";
	return 0;
}

