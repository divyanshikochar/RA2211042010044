#include<stdio.h>
int main()
{
  double a , b ,product;
  printf ("enter two numbers: ");
  scanf("%lf , %lf", &a ,&b);
  //calculating report
  product = a*b;
  //%.2lf displays number upto two decimal points
  printf("product = %.2lf", product);
  return 0;
}
