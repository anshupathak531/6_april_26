#include<stdio.h>
int main()
{
int n;
printf("Enter a number");
scanf("%d", &n);
(n>0) ? printf("%d is positive", n):
(n<0) ? printf("%d is negative", n):
printf("%d is zero", n);
return 0;
}
