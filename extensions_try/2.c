#include<stdio.h>

#define mac() (	{__label__ lab;			\
		for(int i=0;i<2;i++)		\
			for(int j=0;j<2;j++)	\
				if(j==1)	\
				goto lab;	\
		lab:;				\
		}\
	)
int main(){
	
	

	mac();
	printf("ok");
	mac();


	
}

