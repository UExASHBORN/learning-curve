#include <stdio.h>
int add( int x, int y){
	return x+y;
}
int add( int x, int y, int z){
	return x+y+z;
}
int main(){
	int a, b, c;
	scanf("%d%d", &a, &b);
	c = add ( a, b);
	printf("Result = %d\n", c);
	return 0;
}
