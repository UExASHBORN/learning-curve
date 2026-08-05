#include<iostream>
#include<numeric>
#include<vector>
using namespace std;
int main(){
	vector<string>str;
	fill_n(back_inserter(str),5,"Lucknow");
	string concatinate=accumulate(str.begin(),str.end(),string(""));
	cout << "Concatination=" << concatinate << "\n";
	return 0;
}
