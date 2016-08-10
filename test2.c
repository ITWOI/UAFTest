#include "stdlib.h"

int test1()
{
    int array[1000];
    char* p = (char*)malloc(10);
    free(p);
    int pos = (long)p%1000;
    array[pos] = 0;
    return 0;
}

int main()
{
    test1();

    return 0;
}
