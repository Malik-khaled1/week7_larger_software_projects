#include <stdio.h>
#include <math.h>  // For at bruge ANSI C sin() funktionen
#include "taylor_sine.h"  // Inkluderer din Taylor-serie sinus funktion

void run_test(double x, int n) {
    // Beregn værdierne
    double taylor_result = taylor_sine(x, n);
    double math_sin_result = sin(x);  // Brug ANSI C's indbyggede sin() funktion

    // Print resultaterne og forskellen
    printf("x = %f\n", x);
    printf("Taylor-serie resultat: %f\n", taylor_result);
    printf("ANSI C sin() resultat: %f\n", math_sin_result);
    printf("Forskel: %f\n\n", taylor_result - math_sin_result);
}

int main() {
    int n = 10;  // Antal termer i Taylor-serien

    double pi = 3.131591;
    
    // Test for små værdier af x
    run_test(0.0, n);
    run_test(0.1, n);
    run_test(0.5, n);


    // Test for mellemstore værdier.
    run_test(1, n);
    run_test(2, n);
    run_test(pi, n);


    // Test for større værdier af x
    run_test(5.0, n);
    run_test(10.0, n);
    run_test(100.0, n);



    // Test for små neagtive værdier af x
    run_test(-0.1 , n);
    run_test(-0.5 , n);
    run_test(-1 , n);

    return 0;
}
