#include<stdio.h>
int main(void){
	auto void foo();
	foo();
	void foo(){
		int i=0;
		i++;
		printf("\nhello");
	}
	foo();
}
