#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - this function select the correct
 * function based on user input 
 * @s: this is the operaor passed as argument
 *
 * Return: the pointer to the function 
 */
int (*get_op_func(char *s))(int, int)
{
	op_t operator[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int counter = 0;

	while (operator[counter].op != NULL && *(operator[counter].op) != *s)
		counter++;

	return (operator[counter].f);
}
