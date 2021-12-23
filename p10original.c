#include <stdio.h>

struct complexnumber 
{
  int real, img;
};
struct complex number 
complex, add(complex a, complex b)
{
  struct complexnum c;

  c.real = a.real + b.real;
  c.img = a.img + b.img;
  return c;
}
int main()
{
  struct complexnumber a = {1, 2};
  struct complexnumber b = {4, 5};
  struct complexnumber c = sumcomplex(a,b);
  printf("complex number 1: i%d\n",a.real, a.img);
  printf("complex number 2: %d + i%d\n",b.real, b.img);
  printf("sum of the complex numbers: %d + i%d\n",c.real,c.img);
  return 0;
}

