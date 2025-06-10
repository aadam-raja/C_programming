#include<stdio.h>
int main() {
int a,i,j;
a=1;
for(i=1;i<=4;i++) {
for(j=1;j<=i;j++) 
{ a=j+64;
 
printf("%c",a); }
printf("\n"); } 
return 0; }