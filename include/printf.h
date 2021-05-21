/*
** EPITECH PROJECT, 2021
** printf
** File description:
** lib
*/

#ifndef PRINTF_H_
#define PRINTF_H_

#include "lib.h"

void my_print_int(va_list *ap);
void my_print_char(va_list *ap);
void my_print_str(va_list *ap);
void my_print_hexa_upper(va_list *ap);
void my_print_hexa_lower(va_list *ap);
void my_print_pointer(va_list *ap);
void hexa_digit(int decimal);
void hexa_letter_lower(int decimal);
void hexa_letter_upper(int decimal);
void hexadecimal_upper(int decimal);
void pointer(int nb);
void octal(int nb);
void my_print_octal(va_list *ap);
int main_loop(char *src, va_list *ap, char *flag);
int find_print(char flag, char *src);
int my_printf(char *str, ...);
void hexadecimal_lower(int decimal);


#endif /* !PRINTF_H_ */
