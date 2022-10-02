// 10. Write a program in C to calculate the power of any number using recursion.

#include<stdio.h>
int pow();
int main() {
    int n,p;
    printf("enter the number and power :");
    scanf("%d%d",&n,&p);

     printf("power is %d",pow(n,p));
    return 0;
}
int pow(int n,int p) {
    if(p==0)
    return 1;
    return n* pow(n,p-1);
    
}