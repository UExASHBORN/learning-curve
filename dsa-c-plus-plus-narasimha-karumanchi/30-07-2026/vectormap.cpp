#include<iostream>
#include<map>
#include<vector>
#include<set>
using namespace std;
int main(){
	vector<map<string,string> >info;
	map<string,string>m;
	m.insert(make_pair("Filename","Vijay"));
	m.insert(make_pair("Surname","Srivastava"));
	info.push_back(m);
	map<string,string>mn;
	mn.insert(make_pair("Filename","Mona"));
	mn.insert(make_pair("Surname","Srivastava"));
	info.push_back(mn);
	map<string,string>mno;
	mno.insert(make_pair("Filename","Ajay"));
	mno.insert(make_pair("Surname","Nagar"));
	info.push_back(mno);
	map<string,string>mnop;
	mnop.insert(make_pair("Filename","Lila"));
	mnop.insert(make_pair("Surname","Bansali"));
	info.push_back(mnop);
	cout << "Printing of the vector:" << endl;
	map<string,string>::iterator itr=m.begin();
	while ( itr!=m.end() ){
		cout << itr-> first << "\t" << itr->second << "\n";
		itr++;
	}
	cout << endl;
	map<string,string>::iterator its=mn.begin();
	while ( its!=mn.end() ){
		cout << its -> first << "\t" << its -> second << "\n";
		its++;
	}
	cout << endl;
	map<string,string>::iterator itt=mno.begin();
	while ( itt!=mno.end() ){
		cout << itt -> first << "\t" << itt -> second << "\n";
		itt++;
	}
	cout << endl;
	map<string,string>::iterator itu=mnop.begin();
	while ( itu!=mnop.end() ){
		cout << itu-> first << "\t" << itu->second << "\n";
		itu++;
	}
	cout << endl;
	vector<map<string,string> >::iterator it=info.begin();
	set<string>s;
	while( it!=info.end() ){
		s.insert((*it)["Filename"]);
		it++;
	}
	cout << endl;
	cout << "SIZE =" << s.size() << endl;
	return 0;
}
