#include <stdio.h>

int main () {
	//Déclaration + initialisation
	char *chaine = "Une chaine";
	
	//Parcours
	for(int i = 0 ; i < 10 ; i ++ ) {
		printf("%c, ", chaine[i]);
	}
	printf("\n");
	return 0;
}

