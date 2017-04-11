#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main ()
{
    int nombreMystere1 = 0, nombreEntre1 = 0 ,nombreMystere2 = 0, nombreEntre2 = 0 , menu=0;
    char nom1[10],nom2[10];
    // Génération du nombre aléatoire
    srand(time(NULL));
    nombreMystere1 = (rand() % 100);
	nombreMystere2 = (rand() % 100);
    /* La boucle du programme. Elle se répète tant que l'utilisateur n'a pas trouvé le nombre mystère */
    printf("\t\t\t\tBIENVENUE \n\n je veux choisi un nombre entre 1 et 100 et tu doit le trouver");
    do
	{
	    printf("\n\n + Pour un joueur    ====> '1'\n + Pour deux joueurs ====> '2'\n");
	    scanf("%d",&menu);
	}while(menu!=1&&menu!=2);
    if(menu==1)
  	{
	    do
	    {
	        // On demande le nombre
	        printf("\nQuel est le nombre ? ");
	        scanf("%d", &nombreEntre1);
	        // On compare le nombre entré avec le nombre mystère
	        if (nombreMystere1 > nombreEntre1)
	            printf("C'est plus !\n\n");
	
	    	else if (nombreMystere1 < nombreEntre1)
					printf("C'est moins !\n\n");
				else
					printf ("Bravo, vous avez trouve le nombre mystere !!!\n\n");
	
	    } while (nombreEntre1 != nombreMystere1);
	}
	else
  	{
  		printf("\nEntrer le nom du joueur 1 :   ");
	    scanf("%s",nom1);
		printf("\nEntrer le nom du joueur 2 :   ");
	    scanf("%s",nom2);
	    do
	    {
	        // On demande le nombre
			printf("---->le joueur %s :",nom1);
	        printf("\nQuel est le nombre ? ");
	        scanf("%d", &nombreEntre1);
	        // On compare le nombre entré avec le nombre mystère
	        if (nombreMystere1 > nombreEntre1)
	            printf("C'est plus !\n\n");
	
	    	else if (nombreMystere1 < nombreEntre1)
					printf("C'est moins !\n\n");
				else
					{
					printf ("Bravo, vous avez trouve le nombre mystere !!!\n\n");
					break;
					}
			
			printf("\t\t\t\t---->le joueur %s :",nom2);
	        printf("\n\t\t\t\tQuel est le nombre ? ");
	        scanf("%d", &nombreEntre2);
	        // On compare le nombre entré avec le nombre mystère
	        if (nombreMystere2 > nombreEntre2)
	            printf("\t\t\t\tC'est plus !\n\n");
	
	    	else if (nombreMystere2 < nombreEntre2)
					printf("\t\t\t\tC'est moins !\n\n");
				else
					printf ("\t\t\t\tBravo, vous avez trouve le nombre mystere !!!\n\n");

	    } while (nombreEntre2 != nombreMystere2 && nombreEntre1 != nombreMystere1);
	    
	    if(nombreEntre2 == nombreMystere2)
	    {
	    printf ("\n\n\t\tFilicitation %s t\'es gagne",nom2);
		}
	    else
		{
	    printf ("\n\n\t\tFilicitation %s t\'es gagne",nom1);
		}
	    
	}
	system("pause");
    return 0;
}
