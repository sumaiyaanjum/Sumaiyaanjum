#include <stdio.h>
int input()
{
  int a;
  printf("enter the number");
  scanf("%d" ,&a);
  return a;
}
int compute(int b)
{
b=b+1;
return b;
}
void output(int b) 
{
printf("new number%d",b);
}
void main()
{
int x,y;
x=input();
y=compute(x);
output(y);
}

