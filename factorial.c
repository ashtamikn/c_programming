#include<stdio.h>
;
long int fact(int q);
int main()
{
    int n;
    long int ans;
printf("enter no");
scanf("%d",&n);
ans=fact(n);
printf("ans is %ld",ans);
}
long int fact(int q)
{
if(q>=1)
 return q*fact(q-1);
 else
 {
     return 1;
 }
 
}