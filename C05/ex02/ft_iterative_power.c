int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	value;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	value = 1;
	i = 0;
	while (i < power)
	{
		value = value * nb;
		i++;
	}
	return (value);
}
