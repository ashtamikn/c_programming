#include<stdio.h>




void reverseArray(int reverse , int);

int main(){

    int num=0,index,n;
    printf("enter n\n");
    scanf("%d",&num);

   int* hey;
    hey=(int*)malloc(n*sizeof(int));

    printf("enter integer numbers in pointer");

    for( index = 0 ; index < num ; index++){
        scanf("%d",hey[index]);     
    }

    reverseArray(hey, num);


    return 0 ; 
}

void reverseArray(int reverse, int Size){
    int*ptArray[Size],index=0; 

   printf( "the reverse order of entered numbers is : " );
        ptArray[index] =reverse[Size];
       scanf("%d",*ptArray[index] ) ;
        --Size;
    }


}