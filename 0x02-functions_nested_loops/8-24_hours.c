#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Return:nothing
 */
void jack_bauer(void)
{
	int hour;
	int minute;
	
	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar(hour);
			_putchar(minute);
			_putchar('\n');
		}
	}
}
