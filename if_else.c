#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    if(n%2==0)
    {
        printf("Even number");
    }
    else 
    {
        printf("Odd number");
    }
}