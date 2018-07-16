#include<stdio.h>
void boo(){
	void *p=__builtin_return_address(0);
	printf("\n%x \t%x",p);
}
void foo(){
	boo();
}
int main(){
	foo();
}
