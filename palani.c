#include<stdio.h>
int main()
{
int i,n,count=0;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;++i)
{
count=count+i;
}
printf("%d",count);
return 0;
}
