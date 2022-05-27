#include <stdio.h>
#define TAM_MAX 2

struct TEmpleado{
	char nombre[50]; 
	char apellidos[50];
	char NombreUsuario[50];
    int Contrasena[50];
	int Nexpediente[10];
	int puntuacion;
};

struct Tnivel1 {
    char pregunta1[100];
    char pregunta2[100];
    char pregunta3[100];
};

struct Tnivel2 {
    char pregunta1[100];
    char pregunta2[100];
    char pregunta3[100];
};

struct Tnivel3 {
    char pregunta1[100];
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

int intro () {
	printf("\n\nBienvenidos a RCL:\n");
	printf("\nEntre los 300 trajadores, has sido elegido como empleado del mes.\n");
	printf("\nLa empresa ha decidido realizar una serie de pruebas, que deberás ir superando para poder conseguir el ascenso. \n");
	printf("La yinkana consta de 3 niveles.\n");
	printf("Cada nivel se compone de 3 pruebas, cuyo valor son 3 puntos (1 punto por prueba).\n");
	printf("\nAl finalizar las pruebas, se realizara un recuento de puntos.\n");
	printf("En caso de no obtener los puntos solicitados (superar al menos dos pruebas), seras eliminado del juego, sin poder obtener el ascenso.\n");
	printf("\nEn cualquier momento, tendras la posibilidad de abandonar la yinkana.\n");
	printf("\n El ascenso lo obtendrás en el caso de superar los 3 niveles (cada nivel con su requisito de puntos, es decir, 2 puntos por nivel como mínimo).\n");
	printf("\n");
	return;
}

int preguntas(char respuesta, char opcioncorrecta, int nivel){
	int puntuacion=0, bien, mal,solucion;
	switch (nivel) {
		case 1:
			bien = 1;
			mal = 0;
		break;

		case 2:
			bien = 1;
			mal = 0;
		break;

		case 3:
			bien = 1;
			mal = 0;
		break;
	}
	
if (respuesta=solucion) {
		printf ("	obtienes %d puntos\n", bien);
		puntuacion +=bien;
	}
	else {
		printf ("	Respuesta incorrecta\n");
		puntuacion = mal;
	}

return puntuacion;
};


int main () {
	struct TEmpleado empleados[TAM_MAX];
	int contador;
	int i;
	int opcion;
	FILE*ppreguntasnivel1;
	FILE*ppreguntasNivel2;
	banner();
	
	do {
	printf("MENU DE OPCIONES\n");
	printf("1. Registrarse.\n");
	printf("2. Iniciar  sesión.\n");
	printf("3. Comienza el juego.\n");
   	printf("4. Salir del juego.\n");
    
	printf("OPCION: ");
	scanf("%d", &opcion);
	switch(opcion) {
        case 1:
		    
            printf ("\n");
    		printf ("Registrarse.\n");
        	for(i=0; i<contador; i++) {
     	    printf("Introduce tu nombre:\n");
     	    scanf("%s", empleados[i].nombre);
     	    printf("Introduce tus apellidos:\n");
     	    fflush(stdin);
     	    scanf("%s", &empleados[i].apellidos);
     	    printf("Introduce tu numero de expediente:\n");
     	    scanf("%d", &empleados[i].Nexpediente);
            }
			for (i=0; i<contador; i++) {
	 		printf ("%s - %s - %d.\n", empleados[i].nombre, empleados[i].apellidos, empleados[i].Nexpediente);
			}
			printf ("\n\n");
        break;
        
       case 2:
            printf("\n");
            printf("Iniciar Sesion\n Usuario:");
            scanf("%s", &empleados[i].NombreUsuario);
            printf("Contrasena:");
            scanf("%d", &empleados[i].Contrasena);
            intro ();
		break;
        
        ///programado en otro prarama PROGRAMA.C esto solo abarca registrarse, iniciar sesion y salir 
        /*case 3:
        	printf("\n");
        	printf("COMIENZA EL JUEGO");
			preguntasnivel1 = fopen ("preguntasnivel1.txt", "r");
			for(i=0; i<preguntasnivel1;i++){
				if(ppreguntasnivel1== NULL){
					printf("error en la apertura del fichero\n");
				}
			}
        	preguntasnivelNivel2 = fopen("preguntasNivel2.txt", "r");*/
        	
        
        
		}
	
	
	}
	
	while (opcion!=4);
	system("cls");
	printf ("HAS PERIDIDO LA OPORTUNIDAD DE ASCENDER.\n");

return 0;

}
