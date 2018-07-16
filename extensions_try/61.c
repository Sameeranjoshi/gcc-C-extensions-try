
// C Program to demonstrate working of anonymous struct
#include<stdio.h>
struct Scope
{
    // Anonymous structure
    struct
    {
        char alpha;
        int num;
    };
	struct {
			
	};
};
 
int main()
{
    struct Scope x;
    x.num = 65;
    x.alpha = 'B';
 
    // Note that members of structure are accessed directly
    printf("x.alpha = %c, x.num = %d", x.alpha, x.num);
 
    return 0;
}
