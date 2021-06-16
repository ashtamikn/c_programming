#include <stdio.h>
//#include <string.h>
int main(){
 {
 //int a=strlen("hello");
 //printf("%d",a);
  char a[]="hello";
  int len=0,i;
  
  for(i=0;a[i]!='\0';i++){
      len++;
  }
  printf("%d",len);
 } 
 }
