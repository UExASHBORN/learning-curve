#include<iostream>
#include<map>
#include<set>
using namespace std;
int main(){
	map <int> ma;
	ma.push_back(10);
	ma.push_back(20);
	ma.push_back(30);
	ma.push_back(40);
	ma.push_back(20);
	map<int>::iterate itr=ma.begin();
	while( itr!=ma.end() ){
		cout << *itr << "\t";
		itr++;
	}
	cout << endl;
	return 0;
}
