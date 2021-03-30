Standard Input:
123

Standard Output:
3

Solution:

Iterative Solution:

int digit(long n)
{
	int count=0;
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	return count;
}

Recursive Solution:

int digit(long n)
{
	if(n==0)
		return 0;
	return 1 + digit(n/10);
}

Logarithmetic Solution:

int digit(long n)
{
	return floor(log10(n)+1);
}