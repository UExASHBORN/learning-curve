#include<iostream>
#include<map>
using namespace std;
int main(){
	map<string,string>info;
	info["name"]="Ajay Kumar";
	info.insert(make_pair("age","20"));
	info.insert(make_pair("college","Integral University"));
	cout << info["age"] << "\n";
	map <string,string> copy;
	copy.insert(info.begin(),info.end());
	map<string,string>::iterator itr=copy.begin();
	while( itr!= copy.end() ){
		cout << itr-> first << "\t" << itr-> second << "\n";
		itr++;
	}
	info.insert(info.begin(), make_pair("city","Lucknow"));
	map<string,string>::iterator itr2=info.begin();
	while( itr2!= info.end() ){
		cout << itr2-> first << "\t" << itr2-> second << "\n";
		itr2++;
	}
	return 0;
}
