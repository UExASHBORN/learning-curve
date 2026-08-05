#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
using namespace std;
int main(){
	vector<int>vec;
	vec.push_back(10);
	vec.push_back(50);
	vec.push_back(17);
	vec.push_back(32);
	vector<int>::iterator itr=find(vec.begin(),vec.end(),17);
	if(itr!=vec.end()){
		cout << "found\n";
	}else{
		cout << "Not Found\n";
	}
	return 0;
}
