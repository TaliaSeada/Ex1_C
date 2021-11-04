#include "NumClass.h"
int factorial(int n){
    if(n == 0) {
        return TRUE;
    }
    if(n == 1) {
        return TRUE;
    }
    return factorial(n-1)*n;
}
int isStrong(int num){
    int res = 0;
    int temp = num;
    while(num/10 != 0){
        res += factorial(num%10);
        num = num/10;
    }
    if(num > 0){
       res += factorial(num); 
    }
    if(res == temp){
        return TRUE;
    }
    return FALSE;
    
}
int isPrime(int num){
    if(num == 0) {
        return FALSE;
    }
    if(num == 1) {
        return TRUE;
    }
    for(int i = 2; i <= num/2; i++){
        if(num % i == 0){
            return FALSE;
        }
    }
    return TRUE;
}



