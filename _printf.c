#include <unistd.h>
#include <stdarg.h>

int handle_decimal(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;
	long num = n;          /* utiliser long pour gérer INT_MIN */
	char buffer[12];       /* assez pour -2147483648 */
	int i = 0;

	/* gérer le signe négatif */
	if (num < 0)
	{
		write(1, "-", 1);
		count++;
		num = -num;
	}

	/* gérer le cas où num = 0 */
	if (num == 0)
	{
		write(1, "0", 1);
		return (count + 1);
	}

	/* convertir num en chaîne */
	while (num > 0)
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}

	/* afficher dans le bon ordre */
	while (i--)
	{
		write(1, &buffer[i], 1);
		count++;
	}

	return (count);
}
