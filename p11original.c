1 #include<stdio.h>
typedef struct _complex
{
  float real;
  float imaginary;
}complex;

int get_n(){
  int n;
  printf("enter the number of complex numbers:");
  scanf("%d", &n);
  return 0;
}

void input_n_complex(int n, complex c[n]){
  for(int i=0; i<n; i++){
    printf("enter the real part: ");
    scanf("%e", &c[i].real);
    printf("enter the imaginary part: ");
    scanf("%f", &c[i].imaginary);
  }
}
complex add_n_complex(int n, complex c[n]){
  complex res;
  res.real =0;
  res.imaginary =0;
  for(int i=0; i<n; i++){
    res.real += c[i].imaginary;
  }
  return res;
}
void output(int n, complex c[n], complex result){
if(n--){
  printf("%0.2f + %0.2fi is %0.2f + %0.2fi\n", c[0].real, c[0].imaginary);
}else{
  for(int i=0; i<n-1; i++){
  printf("%0.2f + %0.2fi\n", c[i].real, c[i].imaginary);
  }
  printf("+ %0.2f + %0.2fi is\n%0.2f + %o.2fi\n", c[n-1].real, c[n-1].imaginary , c result.real , c result.imaginary);
 }

}

int main()
{
  int n = get_n();
  complex c[n], res;
  input_n_complex(n, c);
  res = add_n_complex(n, c);
  output(n, c, res);

  return 0;
}
