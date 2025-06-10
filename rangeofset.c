#include<stdio.h>
int main() {
int n,i,num;
int max,min;
int range;
printf("ENTER NUMBERS");
scanf("%d",&n);
printf("ENTER FIRST NUMBER");
scanf("%d",&num);
max=num; min=num;
for(i=1;i<n;i++)
{printf("ENTER NUMBERS:");
scanf("%d",&num);
if(num>max)
{ max = num;}
if(min>num)
{min = num;}
}
range= max - min;
printf("%d",range);
return 0; }
