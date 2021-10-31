#include "NumClass.h"
#include <math.h>
//recursion
int length(int num){
    int count=0;
    while(num>0){
        count++;
        num/=10;
    }
    return count;
}
int recursion(int num,int len){
    if(num<10){
        return pow(num,len);
    }
    return pow(num%10,len)+recursion(num/10,len);
}
int isArmstrong(int num){
    int res=recursion(num,length(num));
    if(res==num){
        return 1;
    }
    else{
        return 0;
    }
}
int isPalindrome(int num){
    if (num < 10 ){
        return 1;
    }
    int last = num;
    int first = num;
        while(first >= 10) {
            first = first / 10;
        }
        last = last % 10;
        if(first==last) {
            num=num-last*pow(10,length(num));
            num/=10;
           return isPalindrome(num);
        }
        else{
            return 0;
        }
}
