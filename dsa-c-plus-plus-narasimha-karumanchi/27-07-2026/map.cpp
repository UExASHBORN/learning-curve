#include<iostream>
#include<map>
using namespace std;
int main(){
	map <string, int> m;
	m["Ajay"]=50;
	m["Ankit"]=70;
	cout << m["Ajay"] << "\n";
	cout << m["Ankit"] << "\n";
	return 0;
}
