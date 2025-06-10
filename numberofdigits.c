#include<stdio.h>
int main()  {
int n, count;
count=0;
printf("ENTER NUMBER");
scanf("%d",&n);
while(n!=0)
{n/=10;

count++;}
printf("no of digits are:%d",count);
return 0; }

