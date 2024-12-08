#include <stdio.h>
#include <stdlib.h>

#include "input_methods.h"
#include "calculation_methods.h"

int main(void) {
    unsigned int program = select_program_to_execute();

    switch (program) {
        case 1: {
            calculate_sum();
            break;
        }
        case 2: {
            unsigned int size = select_array_size();
            unsigned int way = select_way_of_array_handling();
            int array[size];

            if (way == 1) {
                input_random_array(array, size);
            } else if (way == 2) {
                input_manual_array(array, size);
                for (unsigned int i = 0; i < size; i++) {
                    printf("\n%d", array[i]);
                }
            }

            calculate_multiplies_of_five(array, size);
            break;
        }
        case 3: {
            get_keyboard_input();
            getchar();
        }
        default: {
            exit(1);
        }
    }
    return 0;
}
