#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
int a, b, c;
printf("enter three sides of the triangle");
scanf("%d%d%d",&a,&b,&c);
if((a>10)||(b>10)||(c>10))
{
printf("out of range");
exit(0);
}
if((a<b+c)&&(b<a+c)&&(c<a+b))
{
if((a==b)&&(b==c))
{
printf("equilateral triangle");
}
else if((a!=b)&&(a!=c)&&(b!=c))
{
printf("scalene triangle");
}
else
{
printf("isoscales triangle");
}
}
else
{
printf("triangle cannot be found");
}
return 0;
}