#include<stdio.h>
int main(void){
	union some{
		int x;
		char p;	
	}so;
	int q=1;
	char ji='a';
	
	so=(union some)q;//equal to so.x=q
	so=(union some)ji;//equal to so.p=ji

	/*
		so=q is invalid 
		so GNU extension automatically assigns the value to structre member based on type of the value on RHS of '='
	*/
	printf("\n%c",so.p);
}
