#include<stdio.h>

int main(void)
{
    int n=3;
    do
    {
        //printf("Input a valid number (1-8) of lines: ");
        //scanf("%d",&n);
    }while(n==0 || n<1 || n>8);
    for(int lines=0; lines<n+1; lines++)    // number of lines
    {
        for(int space=0;space<n; space++)   //number of spaces
        {
            
            printf(" ");
            for(int k=0;k<j-k; k++)
            {
                printf("#");    
            }
            printf("\n");
        }
    }
}