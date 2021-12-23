
#include <stdio.h>
int cmp(int a, int b, int c)
{
  int largest=0;
  if(a>b && b>c)
  largest=a;
  else if(b>a && b>C)
  largest=b;
  else if(c>a && C>b)
  largest=c;
}
int input()
{
  int a;
  printf("enter the number:");
  scanf("%d",&a);
  return a;
}
void output(int |)
{
  printf("largest number is: %d\n",|);
}
int main()
intx,y,z,|;
x=input();
y=input();
z=input();
|=cmp(x,y,z);
output(|);
return 0;
}



