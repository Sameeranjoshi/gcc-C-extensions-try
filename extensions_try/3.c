#include<stdio.h>
void* foo(void *);
static x:
int main(){
	void *poi;
//	poi=foo(poi);

	goto *poi;//code breaks due to jump to code in a different function


}

void* foo(void *p){
	p=&&x;
x:
	printf("\nx");
	goto p;
y:
	printf("\ny");
	goto p;
z:
	printf("\nz");
	goto p;
p:
	printf("\nout");
	
	return p;
}
