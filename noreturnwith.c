//No Return With Argument Function in C
#include<stdio.h>
void mahes(int,int);//Function Declaration

int main()
{
    int a,b;
    printf("Enter the Value of A and B : ");
    scanf("%d%d",&a,&b);
    //Function Calling
    mahes(a,b);//Actual parameter
    return 0;
}
//Function Definition
void mahes(int a,int b)//Formal Parameter
{
    int c;

    c=a+b;
    printf("\nTotal : %d ",c);

}
