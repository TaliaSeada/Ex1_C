#include "NumClass.h"
#include <math.h>
//iterative
int isArmstrong(int num){
    int length = 0;
    int temp = num;
    int temp2 = num;
    while(temp/10 != 0){
        length++;
        temp /= 10;
       
    }
    if(temp > 0){
        length++;
    }
    int res = 0;
    while(num/10 != 0){
        res += pow(num%10, length);
        num = num/10;
    }
    if(num > 0){
        res += pow(num, length);
    }
    if(res == temp2){
        return 1;
    }
    else {
        return 0;
    }
}
int isPalindrome(int num){
    int temp = 0, modulo, res = num;
    while (num != 0) {
        modulo = num % 10;
        temp = temp * 10 + modulo;
        num /= 10;
    }
    if (res == temp){
        return 1;
    }
    else {
        return 0;
    }
}

