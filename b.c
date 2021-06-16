#include <stdio.h>
int main(){
 int i=1;
 int *p=&i;
*p=7;
 

 printf("%p %d\n",p,*p);
 }

