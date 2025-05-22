
#include<stdio.h>
int main() {
int n;
int i;
int factorial = 1;
printf("ENTER NUMBER");
scanf("%d",&n);
for(i=1;i<=n;i++)
{ factorial*=i;
}
printf("factoral of %d is %d",n,factorial);
return 0; }