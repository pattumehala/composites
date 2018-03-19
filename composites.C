#include<stdio.h>
int main()
{
int i,n,count=0;
printf("\nEnter the number:");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
count++;
}
}
if(count==0)
{
printf("\nNot a composite");
}
else
{
printf("\nYes composite");
}
return 0;
}
