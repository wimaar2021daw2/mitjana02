//mitjana02.c --> Exercici 6  - M10UF1 - ARI1 - Llista d'exercicis m10_exerC.pdf
//Compilació: gcc mitjan02.c -o mitjana02
//Execució: ./mitjan02
//Data: 18-1-17 
//Autor: dc1819daw2

#include <stdio.h>

#define LONG 85 //Longitud del Nom de l'alumne

void cls() {
	printf("\033[2J");
	printf("\033[%d;%dH", 1, 1);	/* move cursor (row 1, col 1) */
}
 
int main ()
{
	float fMitjana,fN1,fN2,fN3;
	char szNom[LONG];
	char cOpc;
    
	cls();
	
	do {
		cls();	
		printf("Introdueix el nom: ");
		scanf("%s",&szNom[0]);
		printf("Introdueix la primera nota: ");
		scanf("%f",&fN1);
		printf("Indica el segon valor: ");
		scanf("%f",&fN2);
		printf("Indica el tercer valor: ");
		scanf("%f",&fN3);
		fMitjana=(fN1+fN2+fN3)/3;
		printf( "L'alumne %s ha tret la següent nota mitjana: %.1f\n",szNom,fMitjana);
		printf("\nVols continuar (s/n)?: ");
		scanf(" %c",&cOpc); 
    } while ((cOpc=='s') || (cOpc=='S')); 
	    
	return 0;
}
