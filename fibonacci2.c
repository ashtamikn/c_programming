#include<stdio.h>
void fibonacci(int n);
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    printf("fibonacci series");
    printf("\n%d\n",0);
    fibonacci(n);
}
void fibonacci(int n)
{
   static int first=0,second=1,sum;
    if(n>0)
    {
        sum=first+second;
        first=second;
        second=sum;
        printf("%d\n",first);
        fibonacci(n-1);
    }
    
}