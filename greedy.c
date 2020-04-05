#include<stdio.h>
#include<math.h>

int main(void)
{
	float n,j;
	float k;
    do
    {
        printf("input the money: ");
        scanf("%f",&n);
        printf("%f\n",n);
    }while(n<0 || n<-1.00);
	
	if(n<1)
	{
	    j=n*10;
	    k=floor(j);
	    printf("%f",k);
	}
	else
	{
	    j=floor(n);
	    printf("%f",j);
	}
}