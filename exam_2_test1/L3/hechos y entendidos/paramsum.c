
/*
Assignment name  : paramsum
Expected files   : paramsum.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the number of arguments passed to it, followed by
a newline.

If there are no arguments, just display a 0 followed by a newline.

Example:

$>./paramsum 1 2 3 5 7 24
6
$>./paramsum 6 12 24 | cat -e
3$
$>./paramsum | cat -e
0$
$>
*/

#include <unistd.h>

void	print_number(int n)
{
	char number[] = "0123456789";

	if(n >= 10)
		print_number (n / 10);
	write(1, &number[n % 10], 1); 
}
int	main(int argc, char **argv)
{
	(void)argv; 

	print_number(argc - 1);
	return 0; 
}
