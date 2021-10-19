#include <stdio.h>
#include <math.h>

void    navigation(void)
{
    int    nav;
    printf("Bonjour;\nQue voulez vous faire :\nAjouter des stocks (tapez 1)\nPasser commande (tapez 2)\nVoir les stocks (tapez 3)\nRegarder l'historique des commande (tapez 4)\nQuitter (tapez 5)\nSeul ses chiffres sont autorisés comme réponse\nTapez ici :");
    scanf("%d",&nav);
    if (nav == 1)
	    Cstock();
    if (nav == 2)
	    commandeClient();
    if (nav == 3)
	    consultation()
    if (nav == 4)
	    return ;
    navigation();
}

int    main(void)
{
    navigation();
    return 0;
}

