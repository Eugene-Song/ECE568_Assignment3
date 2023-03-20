#include <stdlib.h>
#include <stdio.h>
void function(int a, int b, int c)
{
    char buffer1[5];
    char buffer2[20];
    // printf("buffer1 %p\n", buffer1);
    int *ret;
    ret = buffer1 + 21;
    // printf("i=%d, return %d\n", i, *(*ret));
    // printf("i=%d, return %d\n", i, *char_ptr);
    // printf("return %p\n", ret);
    // char *char_ptr = (char *)ret;
    (*ret) += 7;
    // printf("new return %p\n", ret);
}
void main()
{
    int x;
    x = 0;
    function(1, 2, 3);
    x = 1;
    printf("x=%d\n", x);
}