/*altnames.c--可移植整数类型名*/
#include <stdio.h>
#include <inttypes.h>
int main(void)
 {
 	int32-t me32;
 	me32 = 45679098;
 	printf("First,assume int32-t is int: ");
    printf("me32 =%d\n",me32);
    printf("Next,let's not make any assumption.\n");
    printf("Instead, use a \"macro\" from inttypes.h: ");
    printf("me32= %" PRID32 "\n", me32);
    return 0;
 }
