//No Return Without Argument Function in C
/*
   you are using function should be Following this steps
    1.Function Declaration
    2.Function Definition
    3.Function Calling
*/
#include<stdio.h>
void mahes();//Function Declaration

int main()
{
    mahes();//Function Calling
    return 0;
}
void mahes()//Function Definition
{
    int a,b,c;
    printf("\nEnter the A value : ");
    scanf("%d",&a);
    printf("\nEnter the B value : ");
    scanf("%d",&b);
    c=a+b;
    printf("\nTotal : %d ",c);

}
