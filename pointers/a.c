#include<stdio.h>
int main(){
    int ai[]={1,2,3};
    int *pi=ai;
    char ac[]={1,2,3};
    char *pc=ac;
    printf("sizeof ai[]=%zu\n",sizeof(ai));
    printf("sizeof pi=%ld",sizeof(pi));
    printf("sizeof ac[]=%ld",sizeof(ac));
    printf("sizeof pc=%ld",sizeof(pc));
    return 0;



}