#include "NumClass.h"
int factorial(int n){
    if(n == 0) {
        return 1;
    }
    if(n == 1) {
        return 1;
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
        return 1;
    }
    return 0;
    
}
int isPrime(int num){
    if(num == 0) {
        return 0;
    }
    if(num == 1) {
        return 1;
    }
    for(int i = 2; i <= num/2; i++){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}



