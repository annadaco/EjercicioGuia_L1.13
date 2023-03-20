#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int NombrePalindromo(char * nombre)
{
	int longitud = strlen(nombre);
	int primera_letra=0;
	int ultima_letra = longitud -1;
	
	while (nombre[primera_letra] == nombre[ultima_letra])
	{
		if (primera_letra >= ultima_letra)
			return 1;
		primera_letra++;
		ultima_letra--;
		
	}
	return 0;

}


int main (int arg, char *argv[]) {
	
	char nombre[50];
	printf("Escribe tu nombre para saber si es palindromo o no\n");
	scanf("%s", &nombre);
	
	int resultado= NombrePalindromo(nombre);
	if (resultado)
		printf("%s es palindromo\n", nombre);
	else{
		printf("%s no es palindromo\n", nombre);
	}
	
	//funcion donde cambia el nombre a mayusculas
	printf("Nombre original: %s\n", nombre);
	
	for (int i=0; nombre[i]!='\0'; ++i)
	{
		nombre[i]=toupper(nombre[i]);
	}
	printf("Nombre en MAYUSCULAS: %s\n", nombre);
	return 0;
}
