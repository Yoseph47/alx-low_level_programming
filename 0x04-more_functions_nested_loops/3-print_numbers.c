#include "main.h"
// #include <unistd.h>
/**
* print_numbers -> print numbers
*Return: no return.
*/
void print_numbers(void)
{
int ch;
for (ch = 48; ch <= 57; ch++)
{
_putchar(ch);
_putchar('\n');
}
}
// int _putchar(char c)
// {
// 	return (write(1, &c, 1));
// }
// int main(void)
// {
//     print_numbers();
//     return (0);
// }