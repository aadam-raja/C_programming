#include<stdio.h>
#include<math.h>
int main () {
int number,originalnumber,remainder,result=0,n=0;
printf("ENTER AN INTEGER");
scanf("%d",&number);
originalnumber=number;
while(originalnumber!=0)
{ originalnumber/=10;
 ++n; }
originalnumber=number;
while(originalnumber!=0)
{remainder=originalnumber%10;
result+=pow(remainder,n);
originalnumber/=10;}
(result==number)?printf("ARMSTRONG NUMBER"):printf("NOT AN ARMSTRONG NUMBER");
return 0; }