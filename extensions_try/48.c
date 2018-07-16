#include<stdio.h>

int main(){
	printf("\n 1%s",__PRETTY_FUNCTION__);
	auto void foo();
	foo();	
	void foo()
	{
	printf("\n 2%s",__FUNCTION__);		//FUNCTION AND PRETTY_FUNCTION ARE NOT IN C99 STD WHILE,__func__ is in STD
	}
	printf("\n 3%s",__func__);		
	//foo();
return 0;
}

