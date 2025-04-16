#include<stdio.h>
int main()
{ int a,b ;
    printf("ENTER FIRST INTEGER");
    scanf("%d",&a);
    printf("ENTER SECONDD INTEGER");
    scanf("%d",&b);
    int sum = a + b;
    int diff = a -b;
    int prod = a*b;
    float div = b%a;
printf(" SUM IS: %d\n",sum);
printf(" DIFFERENCE IS: %d\n",diff);
printf(" PRODUCT IS: %d\n",prod);
printf("REMAINDER IS: %f\n",div);
return 0;
}
