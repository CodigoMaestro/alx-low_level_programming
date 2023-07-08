#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("The length of the string is: %d\n", len);
    return (0);
}
