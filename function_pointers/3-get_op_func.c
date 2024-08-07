#include "3-calc.h"

/* Function to select operation function based on operator */
int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };

    int i = 0;
    while (ops[i].op != NULL)
    {
        if (*(ops[i].op) == *s && s[1] == '\0')
            return ops[i].f;
        i++;
    }

    printf("Error\n");
    exit(99);
}

