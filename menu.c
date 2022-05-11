#include <stdio.h>
#define TAM_MAX 300

struct TEmpleado{
	char nombre[50]; 
	char apellidos[50];
	int Nexpediente[10];
};

void banner() {
	printf ("             *******            *********        *********      ***************      **********      ******         *********       ************  \n");
	printf ("          *****   *****       ***********       **********      ***************      ***********     ******       ***********      ************** \n");
	printf ("          *****   *****      ******            ***********      ***************      ************    ******      ******           ****************\n");
	printf ("          *****   *****      *****             *****            ********             *************   ******      *****            *****      *****\n");
	printf ("          *****   *****      *****             *****            ********             ****** *******  ******      *****            *****      *****\n");
	printf ("          *****   *****       ********         *****            *************        ******  ******* ******       ********        *****      *****\n");
	printf ("          *************        *********       *****            *************        ******   *************        *********      *****      *****\n");
	printf ("          *************            ******      *****            ********             ******    ************            ******     *****      *****\n"); 
	printf ("          *****   *****             *****      *****            ********             ******     ***********             *****     *****      *****\n");
	printf ("          *****   *****            ******      ***********      ***************      ******      **********            ******     ****************\n");
	printf ("          *****   *****      ***********        **********      ***************      ******       *********      ***********       ************** \n");
	printf ("          *****   *****      *********           *********      ***************      ******        ********      *********          ************  \n");
	printf("\n");
}

void intro () {
	printf("\n\nBienvenidos a RCL:\n");
	printf("\nEntre los 300 trajadores, has sido seleccionado para obtar a un ascenso.\n");
	printf("\nLa empresa ha decidido realizar una serie de pruebas, en las que competiras con otro trabajador, para descubrir quien o quienes obtendran el ascenso. \n");
	printf("\nPara ello, deberas ir superando distintos niveles, cuya dificultad ira aumentando.\n");
	printf("La yinkana consta de x niveles.\n");
	printf("Cada nivel se compone de 3 pruebas, cuyo valor son 3 puntos (1 punto por prueba).\n");
	printf("\nAl finalizar las pruebas, se realizara un recuento de nivel.\n");
	printf("En caso de no obtener los puntos solicitados (superar al menos dos pruebas), seras eliminado del juego, proclamandose ganador el otro jugador.\n");
	printf("\nEn cualquier momento, tendras la posibilidad de abandonar la yinkana.\n");
	printf("\nQuienes hayan superado todos los niveles (con las condiciones necesarias), se someteran a un recuento final.\n ");
	printf("De dicho recuento se obtendra el ganador del ascenso.\n");
	printf("Existiendo una unica excepcion, si en el recuento final hay empate, dichos jugadores seran ganadores del ascenso.\n");
	printf("\n");
	
	system ("pause");
	system ("cls");
}


int main() {
	struct TEmpleado empleados[TAM_MAX];
	int contador;
	int i;
	char opcion;
	
	banner();
     
	 
	 //Se presenta el menu de opciones con un bucle, y que ese bucle no se termine nunca hasta que no se pulse el boton de salir.
	 while(1) {
	 	fflush(stdin);
	 	printf("R - Registrarse.\n");
	 	printf("N - Nivel 1,2,3.\n");
	 	printf("I - Instrucciones del juego.\n");
	 	printf("S - Salir del juego.\n");
	 	scanf("%c", &opcion);
	 	switch(opcion) {
	 		case 'R':
	 			// Primero se pregunta cuantos empleados hay inicalmente. 
                printf("Indica el numero de empleados que van a jugar:\n");
                scanf("%d", &contador);
                
				 // Pedimos los datos de los empleados.
				for(i=0; i<contador; i++) {
     	        printf("Introduce tu nombre:\n");
     	        scanf("%s", empleados[i].nombre);
     	        printf("Introduce tus apellidos:\n");
     	        fflush(stdin);
     	        scanf("%c", &empleados[i].apellidos);
     	        printf("Introduce tu numero de expedinte:\n");
     	        scanf("%f", &empleados[i].Nexpediente);
                }
				for (i=0; i<contador; i++) {
	 				printf ("%s - %c - %f\n", empleados[i].nombre, empleados[i].apellidos, empleados[i].Nexpediente);
			}
				 break;
			case 'N':{
				printf("Nivel 1 2 3\n");
				break;
			}
			case 'I':{
			    intro ();				
				break;
			}
		   case 'S':{
		   	printf("Saliendo del juego.\n");
		   	exit(0);
		   }
		default: {
			printf("La letra introducida es erronea, porfavor introduzca una letra de las mostradas en el menu del juego.\n");
			break;
		}
	}
  }
  	return 0;
}	
