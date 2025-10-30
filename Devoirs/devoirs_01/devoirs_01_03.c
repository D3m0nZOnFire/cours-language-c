#include <stdio.h>
#include <math.h>   // include math functions and M_PI constant
#include <stdlib.h>

// SEE FAQ "Pourquoi faut-il définir M_PI nous-même ?"
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main(void)
{
  double A;
  double B;
  double res;

  // Input for A and B
  printf("Input a value for A: ");
  scanf(" %lf", &A);
  printf("input a value for B: ");
  scanf(" %lf", &B);

  // a) a^b
  res = pow(A,B);
  printf("\n a) %f power %f = %G \n", A, B, res);

  // b) Hypothenuse
  res = hypot(A,B);
  printf("\n b) The hypotenuse of the right triangle is %f \n", res);

  // c) tangent of A
  // WARNING: trigonometric functions use radians
  res = sin(A*M_PI/180.0)/cos(A*M_PI/180.0);
  printf("\n c) The tangent of A is %f \n", res);

  // d) Rounding down A/B
  res = floor(A/B);
  printf("\n d) The rounded down value of A/B is %f \n", res);

  // e) Rounding down A/B with 3 decimals
  res = floor((A/B*1000.0))/1000.0;
  printf("\n e) The rounded down value of A/B with 3 decimals is %f \n\n", res);

  return 0;
}