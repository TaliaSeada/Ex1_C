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
        return TRUE;
    }
    else{
        return FALSE;
    }
}
int revers(int num){
    int size=length(num);
    if(size==0){
        return FALSE;
    }
    return((num%10*pow(10,size))+revers(num/10));
}
int isPalindrome(int num){
    int rev=revers(num);
    rev/=10;
    if(rev==num){
        return TRUE;
    }
    return FALSE;
}