#include<iostream>
#include<map>
using namespace std;
int main(){
	map<string,string> mp;
	mp["name"]="Ajay Kumar";
	mp["Age"]="30";
	mp["city"]="Lucknow";
	map<string,string>::iterator itr=mp.begin();
	while( itr!=mp.end() ){
		cout << itr -> first << "\t" << itr -> second << "\n";
		itr++;
	}
	mp.erase("Age");
	itr=mp.begin();
	while( itr!=mp.end() ){
		cout << itr -> first << "\t" << itr -> second << "\n";
		itr++;
	}
	return 0;
}
