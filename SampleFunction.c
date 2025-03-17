/*
Sample Program of Function in C 
*/
#include<stdio.h>
void mahes()
{
    int a,b,c;
    printf("\nEnter the A value : ");
    scanf("%d",&a);
    printf("\nEnter the B value : ");
    scanf("%d",&b);
    c=a+b;
    printf("\nTotal : %d ",c);

}
int main()
{
    int n,i;
    printf("\nEnter the Limit : ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        mahes();
        printf("\n");
    }
}
