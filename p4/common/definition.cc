#include "definition.h"

#pragma omp declare simd
double f(const double x)
{
    return exp(x);
}

double fs(const double x)
{
    return exp(x);
}

void print_result(double_type a, double_type b, n_type n, double_type result)
{
    printf("Integral of exp(%f, %f, %lu): %f\n", a, b, n, result);
}