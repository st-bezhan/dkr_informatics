//
// Created by Stanislav on 02.12.2024.
//
#include <stdio.h>
#include "input_methods.h"

#include <stdlib.h>
#include <time.h>

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

//ENTRENCE
unsigned int select_program_to_execute() {
    int program = 0;
    do {
        validate_input("%d", &program, "\nSelect program to execute:"
                                       "\n[1] First task;"
                                       "\n[2] Second task"
                                       "\n[3] Third task\n");
    } while (program <= 0 || program > 3);

    return program;
}


// 1 TASK
unsigned long get_length() {
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

// 2 TASK
unsigned int select_way_of_array_handling() {
    int way = 0;
    do {
        validate_input("%d", &way, "\nSelect way to handle an array:"
                                   "\n[1] Set size and put in random numbers"
                                   "\n[2] Set size and numbers\n");
    } while (way <= 0 || way > 2);

    return way;
}

unsigned int select_array_size() {
    int size = 0;
    do {
        validate_input("%d", &size, "\nType in array size [>0]: ");
    } while (size <= 0);

    return size;
}

void input_manual_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("arr[%d]: ", i);
        validate_input("%d", &arr[i], "\n");
    }
}

void input_random_array(int arr[], int size) {
    srand(time(0));  // time is needed to have different seed poing each start of the program
    printf("\nArray is filled: {");
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;  // 0 - 99
        printf(" %d", arr[i]);
    }
    printf(" }\n");
}



