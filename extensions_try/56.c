#include<stdio.h>
#include<assert.h>
int main(void){
	int arr[10];
	int brr[20];	
	int *p=&arr[8],*q=&brr[0];
	int x=9;
	assert(x==0);
	printf("%d",__builtin_object_size(p,3));
	printf("%d",__builtin_object_size(brr,0));
	printf("%d",__builtin_object_size(arr,1));
}
