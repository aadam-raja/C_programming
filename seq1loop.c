#include<stdio.h>
#include<math.h>
int main () {
int n,i,exponent;
printf("ENTER NUMBER:");
scanf("%d",&n);
for(i=1;i<=n;i++) {
exponent= pow(2,i); 
printf("%d\t",exponent); }
return 0; }
