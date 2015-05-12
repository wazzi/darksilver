/**
 * This is file2.c 
 * */
#include <stdio.h>
int main(){
	int a = 4;
	int b = 3;
	printf("%a + %b is %c", a,b,(a+b));
}

/* Add 2 integers provided*/
int add(int a, int b){
	return a+b;
}
