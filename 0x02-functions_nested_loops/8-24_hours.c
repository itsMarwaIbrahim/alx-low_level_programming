#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return:nothing
 */
void jack_bauer(void)
{
       	for (int hour = 0; hour < 24; hour++)
	{
		for (int minute = 0; minute < 60; minute++)
			_putchar(hour,minute);
			_putchar('\n')
	}
}
