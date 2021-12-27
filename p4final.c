#include<stdio.h>
int input(){
  int m;
  printf("enter a number:");
  scanf("%d" , &m);
  return m;
}

int calculate (int m,int n,int p){if (m>n){
  if(m>p){
    return m;
  }else{
    return p;
  }
 }else{
  if(n>p){
    return n;
}else{
    return p;
  }
 }
}

void output(int large){
  printf("the largest element is: %d\n", large);
}
int main(){
int m,n,p,large;
  m = input();
  n = input();
  p = input();
  large = calculate(m,n,p);
  output(large);
  return 0;
}
