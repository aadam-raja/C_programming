#include<stdio.h>
int main() {
int i,duration;
float population;
printf("ENTER PRESENT POPULATION");
scanf("%f",&population);
printf("ENTER DURATION");
scanf("%d",&duration);
for(i=1;i<=duration;i++)
{population= population-(population)*10/100;
printf("population %d years ago was:%f",i,population);}
return 0;}

