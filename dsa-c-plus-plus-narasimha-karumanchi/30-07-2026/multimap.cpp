#include<iostream>
#include<multimap>
usiing namespace std;
int main(){
	multimap<string,string> mp;
	mp.insert(make_pair("Ajay","Nagar"));
	multimap<string,string>::iterator itr=mp.begin();
	while( itr!=mp.end() ){
		cout << itr -> first << "\t" << itr->second << endl;
		itr++;
	}
	cout << endl;
	return 0;
}
