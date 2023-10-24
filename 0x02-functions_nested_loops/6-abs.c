/**
 * _abs - computes the absolute value of a given number
 * @n: a signed number for which the absolute value is desired
 * Return: the absolute value of @n
 */
int _abs(int n)
{
int retVal = 0;

retVal = (n <= 0) ? (-1 * n) : n;

return (retVal);

}
