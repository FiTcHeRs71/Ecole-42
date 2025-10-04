

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dst_len;
	size_t src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);

	if (dst_len >= dstsize)
	{
		dst_len = dstsize;
	}
	if (dst_len == dstsize)
	{
		return (dstsize + src_len);
	}
	if (src_len < dstsize - dst_len)
	{
		ft_memcpy(dst + dst_len, src, src_len + 1);
	}
	else
	{
		ft_memcpy(dst + dst_len, src, dstsize - dst_len - 1);
		dst[dstsize - 1] = '\0';
	}
	return (dst_len + src_len);
}
/*int		main(void)
{
		char dest[35] ="KCORP";
		char *src = " ON FIRE !!!";


		ft_strlcat(dest, src, sizeof(char) * 35);

		printf("%s\n", dest);
}*/

/*La fonction strlcat() concatène des chaînes avec les mêmes paramètres d’entrée et le même résultat de sortie que snprintf(3).
Elle est conçue pour être une alternative plus sûre,
	plus cohérente et moins sujette aux erreurs que la fonction strncat(3),
	souvent mal utilisée.

strlcat() prend en compte la taille totale du tampon de destination et garantit la terminaison par un caractère NUL si de la place est disponible.
⚠️ Remarque : l’espace pour le caractère NUL doit être inclus dans dstsize.
⚠️ Remarque également : strlcat() ne fonctionne que sur de véritables chaînes C.
Cela signifie que src et dst doivent être terminées par un caractère NUL.*/