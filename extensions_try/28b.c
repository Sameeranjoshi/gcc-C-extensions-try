#include <stdio.h>
int main(){
	int widths[] = { [0 ... 9] = 1, [10 ... 99] = 2, [100] = 3 };
	for(int i=0;i<100;i++)
	printf("\n%d",widths[i]);
}
