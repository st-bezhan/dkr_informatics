//
// Created by Stanislav on 02.12.2024.
//

#ifndef INPUT_METHODS_H
#define INPUT_METHODS_H

unsigned int validate_input(const char* formatSpecifier, void* value, char message[]);
unsigned int select_program_to_execute();
unsigned long get_length();
long double get_starting_number();
unsigned int select_array_size();
unsigned int select_way_of_array_handling();
void input_manual_array(int arr[], int size);
void input_random_array(int arr[], int size);


#endif //INPUT_METHODS_H
