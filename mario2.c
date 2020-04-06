#include<stdio.h>
main()
{
int height=9;
while(height<1 || height>8)
{
printf("Height:");
scanf("%d",&height);
}
int h=height;
int space=h-1;
int n=1;
for(int i=0;i<height;i++)
{
for(int j=0;j<space;j++)
{
printf(" ");

}
space--;
for(int k=0;k<n;k++)
{
printf("#");

}
printf(" ");
for(int k=0;k<n;k++)
{
printf("#");

}
n++;
printf("\n");

}
}