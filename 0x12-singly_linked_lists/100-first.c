#include <stdio.h>
void first_sent(void)__attribute__((constructor));
/**
 * first_sent - a function that  prints a sentence before main
 */
void first_sent(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}

