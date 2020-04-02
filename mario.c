#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int i,j;
    int n=get_int("n: ");
    for(i=1;i<n;i++)
    {
        for(j=i;j<=5;j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
