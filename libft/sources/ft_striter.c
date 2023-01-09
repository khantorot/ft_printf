void	ft_striter(char *s, void (*f)(char *))
{
	char *p;

	if (!s || !f)
		return ;
	p = s;
	while (*p)
		f(p++);
}
