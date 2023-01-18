#include <stdio.h>
#include <stdlib.h>

#define N_EXP 200

double recursion_exp(double x, double res, int n);
double factorial(int n);

int main() {
    printf("exp(7):%f\n", recursion_exp(7,1,1));
    printf("factorial(7):%f\n", factorial(7));

    return 0;
}


double recursion_exp(double x, double res, int n) {
  if (n > N_EXP) return 0;
  return res + recursion_exp(x, res * x / n, n + 1);
}

double factorial(int n) {
    if (n < 0.0) return 0;
    if (n == 0.0) return 1;
    else return n * factorial(n - 1);
}