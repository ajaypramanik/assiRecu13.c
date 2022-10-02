// Write a program in C to count the digits of a given number using recursion


#include<stdio.h>
int count();
int main() {
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    
   printf("Digits are  %d",count(n));
    return 0;
}
int count(int n) {
    
    if(n<10)
    return 1;
    return 1+ count(n/10);
     
    }
    
