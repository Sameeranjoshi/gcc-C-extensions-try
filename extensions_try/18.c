#include<stdio.h>
int main(){
	struct empty{
	}s;
	
	struct empty *p=&s;
	printf("\n%d %d",sizeof(struct empty),sizeof(float));
}
