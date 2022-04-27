static int	conversor(unsigned long long n, char *base, unsigned long long len)
{
	int	aux;

	aux = 0;
	if (n > (len - 1))
	{
		aux += conversor((n / len), base, len);
	}
	write(1, &base[(n % len)], 1);
	return (aux + 1);
}

int	ft_pntr(unsigned long long n)
{
	int	aux;

	aux = 0;
	aux += write(1, "0x", 2);
	aux += conversor(n, "0123456789abcdef", 16);
	return (aux);
}
