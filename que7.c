//7. Write a recursive function to calculate HCF of two numbers


#include<stdio.h>
int hcf();

int main() {
    int a,b;
    printf("enter two number :");
    scanf("%d%d",&a,&b);
    
    
    printf("hcf is %d",hcf(a,b));
    return 0;
}
int hcf(int a,int b) {
    if(a==b)
    return a;
    if(a%b==0)
    return b;
    if(b%a==0)
    return a;
    if(a>b)
    return hcf(a%b,b);
    if(b>a)
    return hcf(b%a,a);
    

}