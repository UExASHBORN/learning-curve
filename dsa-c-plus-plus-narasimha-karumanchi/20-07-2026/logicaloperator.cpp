#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector <int> vi;
	vi.push_back(0);
	vi.push_back(2);
	vi.push_back(4);
	vi.push_back(8);
	vector <int> vf;
	vf.push_back(0);
	vf.push_back(4);
	vf.push_back(8);
	vf.push_back(10);
	for(vector <int>::iterator itr=vi.begin(); itr!= vi.end(); itr++){
		cout << *itr <<" ";
	}
	cout<<endl;
	for(vector <int>::iterator itr=vf.begin(); itr!= vf.end(); itr++){
		cout << *itr <<" ";
	}
	cout << endl;
	if (vi == vf){
		cout << "True" << endl;
	}
	else{
		cout << "False" << endl;
	}
	return 0;
}

