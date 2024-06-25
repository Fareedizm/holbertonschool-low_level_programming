#include <stdio.h>

int main(void)
{
    char c;

    for (c = '0'; c <= '9'; c++)  // Print digits '0' to '9'
        putchar(c);

    for (c = 'a'; c <= 'f'; c++)  // Print lowercase letters 'a' to 'f'
        putchar(c);

    putchar('\n');  // Print a newline character at the end

    return (0);
}

