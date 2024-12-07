//
// Created by Stanislav on 02.12.2024.
//

#include "calculation_methods.h"

#include <stdio.h>

#include "input_methods.h"


double power(double a, int n) {
    double result = 1;
    for (unsigned int i = 0; i < n; i++) {
        result *= a;
    }
    return result;
}

unsigned int factorial(unsigned int n) {
    unsigned int result = 1;

    for (unsigned int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

void calculate_sum() {
    double starting_number = get_starting_number();
    unsigned int length = get_length() - 1;
    double sum = 0;

    for (unsigned int i = 0; i <= length; i++) {
        sum += power(starting_number, i) / factorial(i);
    }
    printf("%lf", sum);
}


