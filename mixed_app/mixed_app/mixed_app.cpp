// mixed_app.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include <stdio.h>
#include <stdlib.h>
#include "firstprojfun.h"


int main()
{
	int a = 0;

	/*
	system("COLOR");	//gibt an, dass es um Farben geht

						
						printf("\033[46m++++++++Auswahl++++++++\033[m\n");	// \033 bedeutet eine Farbwahl, [46m gibt den Farbton an, und beides wird wieder mit \033[m beendet
						printf("\033[1m Bitte Auswahl treffen  \033[m\n");
						printf("\033[1m K = Kindergeburtstag   \033[m\n");
						printf("\033[1m S = Scan berechnen     \033[m\n");
						*/

	printf("++++++++Auswahl++++++++\n");
	printf("Bitte Auswahl treffen\n");
	printf("K = Kindergeburtstag\n");
	printf("S = Scan berechnen\n");
	scanf("%c", &a);

	// a == 115 || a == 83 ? fScan() : a == 75 || a == 107 ? fKinder();	//Erste Variante
	
	if (a == 115 || a == 83) {
		fScan();
	}
	else if (a == 75 || a == 107){
		fKinder();
	}
	
	printf("Falsche eingabe!\nStarten Sie das Programm neu.\n");

	return 0;
}
