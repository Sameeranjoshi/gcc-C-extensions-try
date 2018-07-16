#include<stdio.h>
int main(void){
	printf("%d%d %d",sizeof(int),sizeof(double),__alignof__(long long));
	struct some{
		int c;
		char z;
		double p;	
	}s;
	printf("\n%d,%d",sizeof(s),__alignof__(s));//the sizeof and alignof are same for basic datatypes but differ for userdefined types
	
}
