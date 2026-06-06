#include <stdio.h>
int add( int x = 10, int y=20){
	return x+y;
}
int add( int x, int y, int z){
	return x+y+z;
}
int main(){
	int a, b, c, d;
	scanf("%d%d%d", &a, &b, &c);
	d = add(a);
	printf("Result = %d\n", d);
	d = add(a, b, c);
	printf("Result = %d\n", d);
	return 0;
}
