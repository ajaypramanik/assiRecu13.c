// Write a recursive function to calculate sum of digits of a given number

#include<stdio.h>
int sum();
int main() {
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    
    int s=sum(n);
    printf("sum is %d",s);
    return 0;
}
int sum(int n) {
    if(n==0)
    return 0;
    int s= n%10+sum(n/10);
    return s;

}