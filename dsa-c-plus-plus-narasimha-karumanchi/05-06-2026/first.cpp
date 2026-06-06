#include<cstdio>
struct student{
	char* name;
	int age;
	char gender;
	void printer(){
		printf("%s\t%d\t%c\n", name, age, gender);
	}
};
int main(){
	struct student st;
	st.name = "Ajay Kumar";
	st.age = 20;
	st.gender = 'M';
	st.printer();
	return 0;
}
