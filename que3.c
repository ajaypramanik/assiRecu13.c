// Write a recursive function to calculate sum of first N EVEN natural numbers


#include<stdio.h>
int sum_even();
int main() {
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    
     int s=sum_even(n);
   
     printf("sum is %d",s);
     return 0;
}

int sum_even(int n) {

    if(n==1)  
    return 2;
   int sum=(2*n)+ sum_even(n-1);

    return sum;


}