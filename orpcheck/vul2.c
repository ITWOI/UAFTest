#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "time.h"

int main()
{
    clock_t start, finish;
    start = clock();

    char *p = (char *)malloc(sizeof(char)*10);
    char *q;
    int i = 0;
    strcpy(p,"hello");
    for(; i<100000; i++)
    {
        q = (char *)malloc(sizeof(char)*4096);
        q = p;
        strcpy(q,"hello");
        sprintf(q,"%d", i);
    }
    strcat(p,"world");

    finish = clock();
    printf("%f seconds\n", (double)(finish - start) / CLOCKS_PER_SEC);
    return 0;
}
