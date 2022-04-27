static int	conversor(int n, char *base, int len)
{
	int	aux;

	aux = 0;
	if (n < -(len - 1) || n > (len - 1))
	{
		aux += conversor((n / len), base, len);
	}
	aux += write(1, &base[(n % len) * ((n >= 0) - (n < 0))], 1);
	return (aux);
}

int	ft_putnbr(int n)
{
	int	aux;

	aux = 0;
	if (n < 0)
	{
		aux += write(1, "-", 1);
	}
	aux += conversor(n, "0123456789", 10);
	return (aux);
}
