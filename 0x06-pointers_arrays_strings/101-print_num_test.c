#include <unistd.h>

int _putchar(char c){
	return (write(1, &c, 1));
}

void print_number(int n)
{
	_putchar(n / 10 + '0');
	_putchar(n % 10 + '0');
}

int main(void)
{
    print_number(98);
    _putchar('\n');
    print_number(402);
    _putchar('\n');
    print_number(1024);
    _putchar('\n');
    print_number(0);
    _putchar('\n');
    print_number(-98);
    _putchar('\n');
    return (0);
}
