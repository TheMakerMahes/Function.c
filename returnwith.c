//Return with Argument Function in C
#include<stdio.h>
int mahes(int,int);

int main()
{
    int a,b;
    printf("Enter the Value of A and B : ");
    scanf("%d%d",&a,&b);
    a=mahes(a,b);
    printf("Total : %d ",a);
    return 0;
}
int mahes(int a,int b)
{

    return a+b;
}

