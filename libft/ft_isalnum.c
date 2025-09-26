
int		ft_isalnum(int c)
{
	if(ft_isalpha(c) || ft_isdigit(c)) 
	{
		return (1);
	}
	else
	{
		return (0);
	}
	
}



/*Cette fonction permet de tester si un caractère est alpha-numérique ou non. 
Un caractère sera considéré comme alpha-numérique s'il est une lettre (minuscule ou majuscule) ou un chiffre. 
Rappel : les fonctions de cette librairie ne traitent que les caractères purs ASCII. 
Les lettres accentuées ne seront donc pas considérées comme des caractères alpha-numériques.*/