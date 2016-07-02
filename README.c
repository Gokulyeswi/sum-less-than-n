# sum-less-than-n
#include<stdio.h>
main()
{

int n,i,sum=0;
printf("enter number");
scanf("%d",n);
for(i=0;i<=n;i++)
{
	sum=i+sum;
}
printf("the sum is %d",sum);
}
