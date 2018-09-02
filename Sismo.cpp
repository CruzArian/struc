//Unversidad Abierta y a Distancia de México
// Desarrollo de Software
//Fundamentos de programación
//Unidad 5
//Arian Eckaid Cruz Urbina
//Matricula ES172003278
//Programa: Ayuda para afectados del Sismo
//Este programa crea una estructura de datos para manejar la base de datos
//de personas afectadas por el sismo.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

main () {

struct beneficiados {
	char fecha [12];
	char nombre [30];
	int edad;
	char domicilio [100];
	int integrantes;
	char tipo [2];
} beneficiado [50]; //la capacidad máxima es de 50 beneficiados, mismos que se usaran en el contador.

int c=1, op, clave; //se declara c = 1 ya que este numero es tambien la clave del beneficiado y el primero tiene el numero 01

do {
	printf ("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
	printf ("\n %c Centro de Ayuda CDMX Norte %c \n", 178, 178);
	printf ("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
	printf ("1) Nuevo registro  \n");
	printf ("2) Ver datos de beneficiado  \n");
	printf ("3) Salir  \n");
	printf ("Por favor elige una opci%cn: ", 162);
	scanf ("%d", &op);
	
	switch (op) {
		case 1:
			printf ("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
			if (c>=51) //cuando el contador alcanza la cantidad de 50 ya no permite ingresar mas datos.
			printf ("Capacidad al m%cximo \n", 160);
			else {
				printf ("Tu clave es:%.2d %cIMPORTANTE NO OLVIDAR ESTA CLAVE!\n", c, 173);
				printf ("Ingresa tus datos por favor \n");
				printf ("Ingresa la fecha en la que te estas registrando por favor [dd/mm/aaaa]: ");
				scanf ("%s", beneficiado[c].fecha);
				printf ("Ingresa tu Nombre por favor: ");
				fflush(stdin);
				gets (beneficiado[c].nombre); //Se usa la función gets ya que esta permite la entrada de cadena de caracteres con espacios.
				printf ("Ingresa tu edad por favor: ");
				scanf ("%d", &beneficiado[c].edad);
				printf ("Ingresa tu domicilio por favor: ");
				fflush(stdin);
				gets (beneficiado[c].domicilio);
				printf ("Ingresa el numero de integrantes de tu familia por favor: ");
				scanf ("%d", &beneficiado[c].integrantes);
				printf ("Ingresa tu tipo sanguineo: ");
				scanf ("%s", beneficiado[c].tipo);
				c++;				
			}
		break;
		case 2:
			printf ("\n*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n");
			printf ("Ingresa tu clave por favor: ");
			scanf ("%d", &clave);
			while (clave>=51 || clave <0) {
				printf ("\nClave invalida, por favor ingresa tu clave correcta otra vez:\n ");
				scanf ("%d", &clave);
			}
			printf ("Tu nombre es: %s\n", beneficiado[clave].nombre);
			printf ("Fecha de regsitro: %s\n", beneficiado[clave].fecha);
			printf ("Tu edad es: %d\n", beneficiado[clave].edad);
			printf ("Tu domicilio es: %s\n", beneficiado[clave].domicilio);
			printf ("El numero de integrantes de tu familia son: %d\n", beneficiado[clave].integrantes);
			printf ("Tu tipo sanguineo es: %s\n", beneficiado[clave].tipo);
		break;
		default:
		printf ("\nEsta opci%cn no es valida\n", 162);
	}
}
	while (op!=3); //El ciclo sigue corriendo a menos que se elija la opción 3
	
	getch();
	
	return 0;
}
