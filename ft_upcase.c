static int	conversor(unsigned int n, char *base, unsigned int len)
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

int	ft_upcase(unsigned int n)
{
	int	aux;

	aux = 0;
	aux += conversor(n, "0123456789ABCDEF", 16);
	return (aux);
}
