#include "taylor_sine.h"
#include <math.h>

double taylor_sine(double x, int n)
{
    double taylor_sum = 0; 
    double term = x; // Vi starter med x^1 
    
    int sign = 1; // Fortegnet starter med at være positivt ved 0. term.
    int fact_value = 1; // start med 1! = 1

    for (int i = 0; i < n; i++)
    {
       taylor_sum += (sign * term) / fact_value; // Summen af termen i = 0....n-1


       term = term * x*x; // Opdater potensen på x. Gang x^2 på hver iteration
       sign = -sign; // skift fortegn for hver iteration.
       
       /*Beregner factoral værdien (2n +1)! ved at gange den nuværende fact_val med de næste 2 fact i rækken*/
       fact_value = fact_value * (2*i + 2) * (2*i + 3);

    }

    
    return taylor_sum;
}

