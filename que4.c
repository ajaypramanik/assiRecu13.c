// 4. Write a recursive function to calculate sum of squares of first n natural numbers

#include<stdio.h>

int square_sum();
int main() {
    int n,s;
    printf("enter the number :");
    scanf("%d",&n);
    
    s= square_sum(n);
    printf("sum of square is %d",s);
    return 0;
}
int square_sum(int n) {
    if(n==1) 
    return 1 ;
     int sum=n*n+square_sum(n-1);
         
        return sum;
}