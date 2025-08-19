#include <stdio.h>
int main()
{
int n;
printf("enter a positive integer:\n");
scanf("%d",&n);
int i,f=1;
for(i=1;i<=n;i++)
{
f=i*f;
}
printf("%d",f);
return 0;
}
