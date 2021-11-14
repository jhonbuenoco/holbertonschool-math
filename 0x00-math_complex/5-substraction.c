#include <stdio.h>
#include "holberton.h"

/**
 * substraction - modulus complex number
 * @c: complex type
 *
 *
 *
 * Return: none
 */

void substraction(complex c1, complex c2, complex *c3)
{
	complex *com1, *com2;

	com1 = &c1;
	com2 = &c2;
	c3->re = com1->re + (-1*com2->re);
	c3->im = com1->im + (-1*com2->im);

}
