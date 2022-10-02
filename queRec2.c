//2. Write a recursive function to calculate sum of first N odd natural numbers




#include<stdio.h>
int sum_odd();
int main() {
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    
     int s=sum_odd(n);
   
     printf("sum is %d",s);
     return 0;
}

int sum_odd(int n) {

    if(n==1)  
    return 1;
   int sum=(2*n-1)+ sum_odd(n-1);

    return sum;

}