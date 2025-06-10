
#include<stdio.h>
int main() {
int i=0;
int n=0;
int sum;
sum = 0;
for(i=0;i<=15;i++)
{printf("ENTER NUMBER");
 scanf("%d",&n);
if(n<=0)
continue;
sum+= n;}
printf("THE SUM OF POSITIVE INTEGERS IS %d",sum);
return 0; } 