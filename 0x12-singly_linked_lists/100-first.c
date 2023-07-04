#include <stdio.h>
#include <unistd.h>

void start(void)__attribute__((constructor));

/**
 * start - executes this function before the main is executed.
 */

void start(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
