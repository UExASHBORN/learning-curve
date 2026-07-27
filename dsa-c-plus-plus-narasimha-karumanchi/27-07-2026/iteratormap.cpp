#include<iostream>
#include<map>
using namespace std;
int main(){
	map <string, int> m;
	m["Ajay"]=50;
	m["Ankit"]=70;
	map<string,int>::iterator itr=m.begin();
	cout << itr -> first << "\n";
	cout << itr -> second << "\n";
	cout << itr++ -> first << "\n";
	cout << itr++ -> second << "\n";
	return 0;
}
