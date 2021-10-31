#include "NumClass.h"
#include <math.h>
#include <stdio.h>
int main(){
    int start, end;
    printf("Enter start and end\n");
    scanf("%d %d",&start,&end);
    int i;
    
    printf("The Armstrong numbers are: ");
    for(i=start; i<=end; i++){
        if(isArmstrong(i)==1){
            printf("%d  ", i);
        }
    }

    printf("\n");
    printf("The Palindromes are: ");
    for(i=start; i<=end; i++){
        if(isPalindrome(i)==1){
            printf("%d  ", i);
        }
    }
  
    printf("\n");
    printf("The Prime numbers are: ");
    for(i=start; i<=end; i++){
        if(isPrime(i)){
            printf("%d  ", i);
        }
    }
    
    printf("\n");
    printf("The Strong numbers are: ");
    for(i=start; i<=end; i++){
        if(isStrong(i)==1){
            printf("%d  ", i);
        }
    }
    printf("\n");
}