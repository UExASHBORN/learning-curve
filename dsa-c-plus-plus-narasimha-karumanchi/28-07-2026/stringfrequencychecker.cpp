#include<iostream>
#include<map>
using namespace std;
int main(){
	string s("Lucknow Junction");
	map <char,int> freq;
	for(int i=0; i<s.size(); i++){
		if(s[i]==' ')continue;
		if(freq.find(s[i])!=freq.end()){
			freq[s[i]]++;
		}else{
			freq[s[i]]=1;
		}
	}
	map<char,int>::iterator itr=freq.begin();
	while(itr!=freq.end()){
		cout << itr -> first << "\t" << itr-> second << "\n";
		itr++;
	}
	return 0;
}
