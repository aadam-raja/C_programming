#include<stdio.h>
int main () {
int i,n;
printf("ENTER NUMBER");
scanf("%d",&n);
for(i=100;i>=n;i/=2)

{printf("%d\n",i);}
return 0; }
