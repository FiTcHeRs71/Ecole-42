

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t			len_s1;
	size_t			len_s2;
	unsigned int	i;
	unsigned int	j;
	char			*str;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	i = 0;
	j = 0;
	str = ft_calloc(len_s1 + len_s2 + 1, sizeof(char));
	while (s1[i])
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		str[j] = s2[i];
		i++;
		j++;
	}
	return (str);
}
/*int	main (void)
{
	char *str = "KCORP";
	char *stt = " ON FIRE!!!!!";
	char *retour;

	retour = ft_strjoin(str,stt);

	printf("%s\n", retour);
	return (0);
}*/