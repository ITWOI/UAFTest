#include "stdlib.h"

int test1()
{
    char* p = (char*)malloc(10);
    free(p);
    *p='1';
    return 1;
}

int test2()
{
    char* p = (char*)malloc(10);
    char* q = p;
    free(p);
    *q='1';
    return 1;
}

int test3()
{
    char* p = (char*)malloc(10);
    char** q = &p;
    free(p);
    **q='1';
    return 1;
}

int main()
{
    test1();
    test2();
    test3();

    return 0;
}
