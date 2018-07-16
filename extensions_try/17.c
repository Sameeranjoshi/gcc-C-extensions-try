#include<stdio.h>
int main(void){
	struct s{
		int a[0];

	}x;
	
	printf("\n%d %d %d %x",sizeof(x),sizeof(char),__alignof__(x));
}

