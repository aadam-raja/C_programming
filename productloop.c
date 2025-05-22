
#include<stdio.h>
int main() {
int n;
int i;
int product = 1;
printf("ENTER NUMBER");
scanf("%d",&n);
for(i=1;i<=n;i++)
{ product*=i;
}
printf("%d",product);
return 0; }