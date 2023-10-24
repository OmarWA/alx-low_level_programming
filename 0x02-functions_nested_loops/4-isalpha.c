/**
 * _isalpha - probes a given character to decide whether it corresponds to
 * an ASCII alphabetical character or not
 * @c: the given character to be compared against ASCII codes for
 * alphabetical characters
 * Return: 1 if @c corresponds to an alphabetical character in ASCII;
 * 0 otherwise
 */
int _isalpha(int c)
{
if (((c >= 0x61) && (c <= 0x7A)) || ((c >= 0x41) && (c <= 0x5A)))
return (1);
else
return (0);
}
