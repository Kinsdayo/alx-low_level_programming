#include "main.h"
/**
 * jack_bauer - funct that prints every minute of the day of Jack Bauer, start
 * n from 00:00 to 23:59, min looo counts mins, while hour loops counts hours
 * and resets mins
 * Return: 0
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hours_reminder;
	int minutes_reminder;

	while (hours <= 23)
	{
	while (minutes <= 59)
	{
	hours_reminder = hours % 10
	_putchar(hours_reminder + '0');
	_putchar(hours / 10 + '0');
	minutes_reminder = minutes % 10
	_putchar(':');
	_putchar(minutes / 10 + '0');
	_putchar(minutes_reminder + '0');
	minutes++;
	_putchar('\n');
	}
	hours++;
	minutes = 0;
}
}