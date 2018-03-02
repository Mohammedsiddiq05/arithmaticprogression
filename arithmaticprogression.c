#include<stdio.h>
int main()
{
int i,n,a[10000],re;
printf("\nenter the a value:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\nenter the  number:");
scanf("%d",&a[i]);
}
re=(n*(a[1]+a[3]))/2;
printf("\n the sum of arithmatic progression is:%d",re);
return 0;
}


