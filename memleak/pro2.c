#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "time.h"

int hash(char *p)
{
    return (long)p%100;
}

void memPro(char *p, char **p_1, char *q, char **q_1)
{
    int arr[100];
    arr[hash(p)] = 1;
    arr[hash(q)] = 1;
    arr[hash(*p_1)] = 0;
    arr[hash(*q_1)] = 0;
    if(arr[hash(p)] == 1)
        free(p);
    if(arr[hash(q)] == 1)
        free(q);
}

int main()
{
    clock_t start, finish;
    start = clock();

    char *p = (char *)malloc(sizeof(char)*10);
    char **p_1 = &p;
    char *q;
    char **q_1 = &p;
    int i = 0;
    strcpy(p,"hello");
    for(; i<100000; i++)
    {
        //TODO: I should explain the malloc function at DangDone.
        //We don't need to chage reference for memory leak.
        q = (char *)malloc(sizeof(char)*4096);
        q = p;
        q_1 = p_1;
        strcpy(q,"hello");
        sprintf(q,"%d", i);
        memPro(p, p_1, q, q_1);
    }
    strcat(p,"world");

    finish = clock();
    printf("%f seconds\n", (double)(finish - start) / CLOCKS_PER_SEC);
    return 0;
}
