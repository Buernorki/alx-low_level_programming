C - Function pointers
TASKS
0. What's my name
Write a function that prints a name.

Prototype: void print_name(char *name, void (*f)(char *));

1. If you spend too much time thinking about a thing, you'll never get it done
Write a function that executes a functi
Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
2. To hell with circumstances; I create opportunities
Write a function that searches for an integer.

Prototype: int int_index(int *array, int size, int (*cmp)(int));
3. A goal is not always meant to be reached, it often serves simply as something to aim at
Write a program that performs simple operations.

You are allowed to use the standard library
Usage: calc num1 operator num2
3-calc.h
This file should contain all the function prototypes and data structures used by the program. You can use this structure:
3-op_functions.c
This file should contain the 5 following functions (not more):

op_add: returns the sum of a and b. Prototype: int op_add(int a, int b);
op_sub: returns the difference of a and b. Prototype: int op_sub(int a, int b);
op_mul: returns the product of a and b. Prototype: int op_mul(int a, int b);
Prototype: int (*get_op_func(char *s))(int, int);
where s is the operator passed as argument to the program
This function returns a pointer to the function that corresponds to the operator given as a parameter. Example: get_op_func("+") should return a pointer to the function op_add

