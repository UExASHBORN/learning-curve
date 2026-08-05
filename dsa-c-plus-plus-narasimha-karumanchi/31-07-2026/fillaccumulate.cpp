#include<iostream>
#include<numeric>
#include<vector>
using namespace std;
int main(){
	vector<string>str;
	str.push_back("Lucknow");
	str.push_back("-");
	str.push_back("Kanpur");
	str.push_back("-");
	str.push_back("Jaunpur");
	fill(str.begin(),str.end(),"IUL");
	string concatinate=accumulate(str.begin(),str.end(),string(""));
	cout << "Concatination=" << concatinate << "\n";
	return 0;
}
