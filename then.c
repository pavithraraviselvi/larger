#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("Enter the number");
scanf("%d%d%d",&a,&b,&c);
if(a>b&&a>c)
{
printf("a is greatest");
}
else if(b>a&&b>c)
{
printf("b is greatest");
}
else
{
printf("c is greatest");
}
return0;
}
