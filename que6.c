// . Write a recursive function to calculate factorial of a given number

#include<stdio.h>
int fact();
int main() {
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    
    int s=fact(n);
    printf("factorial is %d",s);
    return 0;
}
int fact(int n) {
    if(n==0)
    return 1;
    int s=n*(fact(n-1));
    return s;

}