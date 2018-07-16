#include<stdio.h>
#include<complex.h>
int main(void){
	 _Complex  double z=2+64*I;

	z=~z;//this is gnu extn
	//but conjl(z);	is ISO
	z=conjl(z);


	printf("\nreal =%lf || img= %lf %lf",creal(z),cimag(z),__real__ z,__imag__ z);	//last 2 extensions,first 2 ISO 
}
