#include<stdio.h>
void foo(float ,float);
int main(){
	int x=2,a=3,b=4,y=5;
	int arr[3]={1,2,4};	//ok in c90
	int ar[3]={x-y,a-b,x-a};//ext- in c90 and ok in c99
	
	char a1='a';
	char b1='b';
	char brr[2]={a1-b1,b1-a1};
	printf("%d%d%d",brr[0],brr[1],brr[2]);
}

