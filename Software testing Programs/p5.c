#include<stdio.h>
#include <stdlib.h>
int main()
{
int locks,stocks,barrels,t_sales,flag=0;
float commission;
printf("enter total number of locks");
scanf("%d",&locks);
if((locks<=0) || (locks>70))
{
flag=1;
}
printf("enter the total number of stocks");
scanf("%d",&stocks);
if((stocks<=0) || (stocks>80))
{
flag=1;
}
printf("enter the total number of barrels");
scanf("%d",&barrels);
if((barrels<=0) || (barrels>90))
{
flag=1;
}
if(flag==1)
{
printf("invalid input");
exit(0);
}
t_sales=(locks*45)+(stocks*30)+(barrels*25);
if (t_sales<=1000)
{
commission=0.10*t_sales;
}
else if (t_sales<1800)
{
commission=0.10*1000;
commission=commission+(0.15*(t_sales-1800));
}
else
{
commission=0.10*1000;
commission=commission+(0.15*800);
commission=commission+(0.20+(t_sales-1800));
}
printf("the total sales is %d \n the commission is %f",t_sales,commission);
return 1;
}