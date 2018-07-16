#include<stdio.h>
#ifdef __STDC__
#define P(x) x
#else
#define P(x) ()
#endif
/* Prototype function declaration.  */
int isroot P((__uint8_t));
int main(){

//
}
/* Old-style function definition.  */
int
isroot (x)   /* ??? lossage here ??? */
     __uint8_t x;
{
  return x == 0;
}
