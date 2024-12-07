//
// Created by Stanislav on 02.12.2024.
//
#include <stdio.h>
#include "input_methods.h"

unsigned int validate_input(const char* formatSpecifier, void* value, char message[]) {
    char input[100];
    printf("%s", message);
    do {
        fgets(input, sizeof(input), stdin);
        if (sscanf(input, formatSpecifier, value) == 1) {
            return 1;
        } else {
            printf("\nInvalid input, try again\n");
            printf("%s", message);
            fseek(stdin, 0, SEEK_END); //clears buffer
        }
    } while (1);
}

unsigned long long get_length() {
    int N = 0;
    do {
        validate_input("%d", &N, "\nType in N: ");
    } while (N <= 0);
    return N;
}

long double get_starting_number() {
    double starting_number;
    validate_input("%lf", &starting_number, "\nType in starting_number: ");
    return starting_number;
}