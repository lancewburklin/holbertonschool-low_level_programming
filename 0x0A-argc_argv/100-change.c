#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints change
 * @argc: Amount of arguments
 * @argv: Array of arguments
 *
 * Return: Probably 0
 */

int main(int argc, char *argv[])
{
	int quarters = 25;
	int dimes = 10;
	int nickels = 5;
	int twocent = 2;
	int penny = 1;
	int coins = 0;
	int change, remainder;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	remainder = change;

	if (change < 0)
	{
		printf("%d\n", 0);
		return (1);
	}
	coins = coins + (change / quarters);
	remainder = remainder % quarters;
	coins = coins + (remainder / dimes);
	remainder = remainder % dimes;
	coins = coins + (remainder / nickels);
	remainder = remainder % nickels;
	coins = coins + (remainder / twocent);
	remainder = (remainder % twocent);
	coins = coins + (remainder / penny);
	printf("%d\n", coins);
	return (0);
}
