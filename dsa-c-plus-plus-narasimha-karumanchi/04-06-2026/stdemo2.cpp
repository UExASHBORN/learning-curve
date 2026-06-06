#include<cstdio>
class student{
	public:
	char* name;
	int age;
	char gender;
	void printer(){
		printf("%s\t%d\t%c\n", name, age, gender);
	}
};
int main(){
	student st;
	st.name = "Ajay Kumar";
	st.age = 20;
	st.gender = 'M';
	st.printer();
	return 0;
}
