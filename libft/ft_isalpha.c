
int		ft_isalpha(int c)
{
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	
}

/*Cette fonction permet de tester si un caractère est alphabétique ou non.

Un caractère sera considéré comme alphabétique s'il est de lettres minuscules ou de lettres majuscules. 

Rappel : les fonctions de cette librairie ne traitent que les caractères purs ASCII. Les lettres accentuées, 
ne seront donc pas considérées comme des caractères alpha-numériques.*/