#include<stdio.h>
#include<stddef.h>
int main(void){
	union so{
		int x;
		char _2_3;	
	}s;
	printf("\n%d",offsetof(union so,_2_3));
}
