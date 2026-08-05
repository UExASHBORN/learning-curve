#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<list>
using namespace std;
int main(){
	vector<string>vec;
	list<string>li;
	li.push_back("Lucknow");
	li.push_back("-");
	li.push_back("Kanpur");
	li.push_back("-");
	li.push_back("Jaunpur");
	copy(li.begin(),li.end(),back_inserter(vec));
	string sum=accumulate(vec.begin(),vec.end(),string(""));
	cout << "Sum=" << sum << "\n";
	list<string>lis;
	lis.push_back("Lucknow");
	lis.push_back("-");
	lis.push_back("Kanpur");
	lis.push_back("-");
	lis.push_back("Jaunpur");
	vector<string>ve(lis.begin(),lis.end());
	string sumtwo=accumulate(ve.begin(),ve.end(),string(""));
	cout << "Sum=" << sumtwo << "\n";
	return 0;
}
