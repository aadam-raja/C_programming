#include<stdio.h>
int main() {
int i;
int n;
printf("ENTER A NUMBER");
scanf("%d",&n);
int flag=0;
for ( i = 2; i <=n/2; i++)
{ if(n%i==0)
   flag = 1;
   break;
}
if(n==1)
printf("1 IS NOT A PRIME NUMBER");
else if (flag==0)
printf("IT IS A PRIME NUMBER");
else 
printf("it is a composite number");
return 0;} 

