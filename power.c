/* Here is a version of power that makes use of this property. */
/* power: raise base to n-th power; n>=O; version 2 */
int power(int base, int n)
{
	int p;

	for (p = 1; n > 0; --n)
		p = p * base;
	return p;
}
