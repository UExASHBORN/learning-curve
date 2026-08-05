#include<iostream>
#include<numeric>
#include<vector>
using namespace std;
int main(){
	vector<int>vec;
	vec.push_back(10);
	vec.push_back(50);
	vec.push_back(17);
	vec.push_back(32);
	int sum=accumulate(vec.begin(),vec.end(),0);
	cout << "Sum=" << sum << "\n";
	return 0;
}
