#include "stdio.h"
#include "stdlib.h"
#include "string.h"


int main()
{
    char *p = (char *)malloc(sizeof(char)*10);
    char *q;
    int i = 0;
    strcpy(p,"hello");
    for(; i<100; i++)
    {
        q = (char *)malloc(sizeof(char)*10);
        q = p;
        strcpy(q,"hello");
    }
    strcat(p,"world");

    return 0;
}
