#include<stdio.h>
int main(){
	void *p,*q,*r;
	
	int arr[4]={1,2,3,4};
	p=&arr[0];
	q=&arr[5];


	
	int *x,*y;
	x=&arr[0];
	y=&arr[5];

	float *x1,*y1,arrf[4]={1.0,2.0,3.0,4.0};
	x1=&arrf[0];
	y1=&arrf[2];

	r=p+q;
	printf("\n%d %d %d %d ",(q-p),y-x,y1-x1,sizeof(p));
		
}
