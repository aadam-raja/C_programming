#include<stdio.h>
int main () {
int i,n,sum;
sum =0;
printf("ENTER NUMBER:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{ if(i%2==0)
{ sum= sum -i;}
if(i%2!=0)
{ sum= sum +i;}}
printf("%d",sum);
return 0; }
