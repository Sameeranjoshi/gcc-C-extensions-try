#include<stdio.h>
int main(){
	int *x;	
	int xo=3;
	typeof (x) y;
	y=&xo;
	printf("\n%d %d",sizeof(y),sizeof(int));
}
