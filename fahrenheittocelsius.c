#include<stdio.h>
int main(){
float fahrenheit;
float celsius;
printf("ENTER TEMPERATURE");
scanf("%f",&fahrenheit);
celsius= (fahrenheit-32)*5/9;
printf("%f",celsius);
return 0; }