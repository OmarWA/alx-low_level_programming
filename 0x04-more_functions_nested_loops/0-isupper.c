/**
 * _isupper - returns 1 if @c corresponds to an upper-case an ASCII letter
 * and returns 0 otherwise.
 * @c: a numerical representation for a letter
 * Return: 1 if @c corresponds to an upper-case ASCII letter, 0 otherwise
 */
int _isupper(int c)
{
return (((c >= 0x41) && (c <= 0x5A)) ? 1 : 0);
}
