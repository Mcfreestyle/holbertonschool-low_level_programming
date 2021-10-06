#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int digit1 = '0';

	while (digit1 <= '2')
	{
		int digit2 = '0';

		while (digit2 <= '9')
		{
			int digit3 = '0';

			while (digit3 <= '5')
			{
				int digit4 = '0';

				while (digit4 <= '9')
				{
					_putchar(digit1);
					_putchar(digit2);
					_putchar(':');
					_putchar(digit3);
					_putchar(digit4);
					_putchar('\n');
					digit4++;
				}
				digit3++;
			}
			digit2++;
			if (digit1 == '2' && digit2 == '4')
			{
				break;
			}
		}
		digit1++;
	}
}
