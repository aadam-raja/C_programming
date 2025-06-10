#include<stdio.h>
int main()  
{
int age1,age2,age3;
printf("ENTER THE AGES");
scanf("%d %d %d",&age1,&age2,&age3);
if (age1>age2)
{ if(age1>age3)

printf("age1 is the oldest ");
else
 printf("age3 is the oldest"); }
else 
{if (age2>age3)
printf("age2 is oldest");
else 
printf("age3 is oldest"); }
return 0; }

