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

int test4()
{
    char* p = (char*)malloc(10);
    char* q = p;
    char* p1 = q;
    free(p);
    *p1='1';
    return 1;
}
char *gp;
int test5()
{
    char* gp= (char*)malloc(10);
    char* p = gp;
    free(p);
    return 1;
}
int test6(char* p)
{
    p= (char*)malloc(10);
    free(p);
    return 1;
}
int main()
{
    test1();
    test2();
    test3();
    test4();
    test5();

    *gp='1';
    char*mp;
    test6(mp);
    *mp='1';
    return 0;
}
