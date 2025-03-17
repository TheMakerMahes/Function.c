//Return without Argument Function in C
#include<stdio.h>
int mahes();

int main()
{
    int a;
    a=mahes();
    printf("Total : %d ",a);
    return 0;
}
int mahes()
{
    int a,b;
    printf("Enter the Value of A and B : ");
    scanf("%d%d",&a,&b);
    return a+b;
}
