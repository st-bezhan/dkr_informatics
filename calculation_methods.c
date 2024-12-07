//
// Created by Stanislav on 02.12.2024.

#include "calculation_methods.h"
#include "input_methods.h"
#include <stdio.h>

long double power(long double a, int n) {
    long double result = 1;
    for (unsigned int i = 0; i < n; i++) {
        result *= a;
    }
    return result;
}

unsigned long factorial(unsigned int n) {
    unsigned long long result = 1;
    for (unsigned int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

void calculate_sum() {
    double starting_number = get_starting_number();
    unsigned long length = get_length();
    double sum = 0;

    for (unsigned i = 0; i <= length; i++) {
        sum += power(starting_number, i) / factorial(i);
    }

    printf("%lf\n", sum);
}

unsigned int calculate_multiplies_of_five(int array[], int size) {
    unsigned int count = 0;
    for (unsigned int i = 0; i < size; i++) {
        if (array[i] % 5 == 0 ) { // includes 0 as dividable by 5 ?//// && array[i] != 0???
            count++;
            printf("\nTHIS: %d", array[i]);
        }
    }

    printf("\n%d", count);
    return count;
}


