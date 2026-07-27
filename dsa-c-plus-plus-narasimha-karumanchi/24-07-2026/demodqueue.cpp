#include<iostream>
#include<deque>
using namespace std;
int main(){
	deque <char> df;
	df.push_front('l');
	df.push_front('u');
	df.push_front('c');
	df.push_front('k');
	df.push_front('n');
	df.push_front('o');
	df.push_front('w');
	cout << "printing character DEQUE df which used push_front:" << endl;
	deque<char>::iterator itr=df.begin();
	while( itr!=df.end() ){
		cout << *itr << "\t";
		itr++;
	}
	cout << endl;
	df.pop_back();
	cout << "printing character DEQUE df after using pop_back:" << endl; 
	deque<char>::iterator its=df.begin();
	while( its!=df.end() ){
		cout << *its << "\t";
		its++;
	}
	cout << endl;
	deque <char> dc;
	dc.push_back('l');
	dc.push_back('u');
	dc.push_back('c');
	dc.push_back('k');
	dc.push_back('n');
	dc.push_back('o');
	dc.push_back('w');
	cout << "printing character DEQUE dc which used push_back:" << endl;
	deque<char>::iterator itm=dc.begin();
	while( itm!=dc.end() ){
		cout << *itm << "\t";
		itm++;
	}
	cout << endl;
	dc.pop_front();
	cout << "printing character DEQUE dc after using pop_front: " << endl;
	deque<char>::iterator itn=dc.begin();
	while( itn!=dc.end() ){
		cout << *itn << "\t";
		itn++;
	}
	cout << endl;
	cout << "SIZE: " << df.size() << "\n";
	cout << "MAX_SIZE: " << df.max_size() << "\n";
	df.swap(dc);
	cout << "DEQUE df got swapped with dc below: " << endl;
	deque<char>::iterator itt=df.begin();
	while( itt!=df.end() ){
		cout << *itt << "\t";
		itt++;
	}
	cout << endl;
	return 0;
}
