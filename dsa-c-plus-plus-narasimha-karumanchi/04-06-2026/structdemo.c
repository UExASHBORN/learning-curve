#include<stdio.h>
struct student{
	char* name;
	int age;
	char gender;
};
int main(){
	struct student st;
	st.name = "Mahesh Babu";
	st.age = 50;
	st.gender = 'M';
	printf("%s\t%d\t%c\n",st.name,st.age,st.gender);
	return 0;
}
