#include<stdio.h>
int main() {
int n,num,i,a,b,c;
a=0;b=0;c=0;
printf("ENTER NUMBER");
scanf("%d",&n);
for(i=0;i<n;i++)
{printf("ENTER NUMBERS");
scanf("%d",&num);
if(num==0)
{a++;}
else if (num<0)
{b++;}
else if(num>0)
{c++;} }
printf("%d",a);
printf("%d",b);
printf("%d",c);
return 0; }

