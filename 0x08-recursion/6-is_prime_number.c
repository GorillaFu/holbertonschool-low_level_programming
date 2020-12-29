#include "holberton.h"

/**
 * checkPrime - checks if odd numbers divide int w no remainder
 * @n: int to check
 * @div: odd number divisor
 *
 * Return: 1 if prime else 0
 */

int checkPrime(int n, int div)
{
	if (n < 2 || n % 2 == 0)
		return (0);
	if (div > n || div == n)
		return (1);
	if (n % div == 0)
		return (0);

	return (checkPrime(n, div + 2));
}


/**
 * is_prime_number - tells if it is prime number
 * @n: int to check if prime
 *
 * Return: 1 if prime else 0
 */

int is_prime_number(int n)
{
	return (checkPrime(n, 3));
}
