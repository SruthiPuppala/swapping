#include<stdio.h>
int main()
{
int x=7, y=3;

printf("Before swapping the value of x & y: %d %d",x,y);
x=x+y;
y=x-y;
x=x-y;
printf("\nAfter swapping the value of x & y: %d %d",x,y);
return 0;
}
