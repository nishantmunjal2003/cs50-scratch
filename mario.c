#include<stdio.h>

int main(void)
{
    int n;
    do
    {
        printf("Input a valid number (1-8) of lines: ");
        scanf("%d",&n);
    }while(n==0 || n=="" || n<1 || n>8);
    for(int i=0; i<n+1; i++)
    {
        for(int j=0;j<i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}