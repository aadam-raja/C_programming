#include<stdio.h>
int main() {
int n,i;
printf("ENTER NUMBER");
scanf("%d",&n);
for(i=1;i<=n;i++) 
{ if(n%i!=0)
 continue;
 printf("%d\n",i);}
 return 0; }