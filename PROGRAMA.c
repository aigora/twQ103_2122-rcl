#include <stdio.h>
#include <string.h>
#include <string.h>
#define TAM_MAX 2

struct TEmpleado{
	char nombre[50]; 
	char apellidos[50];
	char NombreUsuario[50];
    int Contrasena[50];
	int Nexpediente[10];
	int puntuacion;
};

struct TPregunta {
    char pregunta[150];
    char opcion1[100];
    char opcion2[100];
    char opcion3[100];
    char opcioncorrecta;
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
	struct TPregunta Preguntas[10];
	int contador;
	int i,j=0;
	int opcion;
	char opcionelegida;
	FILE*ppreguntasnivel1;
	FILE*ppreguntasNivel2;
	banner();
	
	while(1) {
	printf("MENU DE OPCIONES\n");
	printf("1. Registrarse.\n");
	printf("2. Iniciar  sesion.\n");
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
        
        
        case 3:
        	printf("\n");
        	printf("COMIENZA EL JUEGO");
        		ppreguntasnivel1 = fopen("preguntasnivel1.txt", "r");
            if (ppreguntasnivel1 == NULL){
                printf("\nError en la apertura de fichero\n");
                return 0;
            }
            printf ("\nPREGUNTA %d\n", j+1);
            
            if (fgets(Preguntas[j].pregunta, 100, ppreguntasnivel1)){
            printf ("%s",Preguntas[j].pregunta);
           }
           if (fgets(Preguntas[j].opcion1, 150, ppreguntasnivel1)){
            printf ("%s",Preguntas[j].opcion1);
           }
           if (fgets(Preguntas[j].opcion2, 150, ppreguntasnivel1)){
            printf ("%s",Preguntas[j].opcion2);
           }
           if (fgets(Preguntas[j].opcion3, 150, ppreguntasnivel1)){
            printf ("%s",Preguntas[j].opcion3);
           }
            fscanf(ppreguntasnivel1, "%c", &Preguntas[j].opcioncorrecta);

           fflush(stdin);
           scanf("%c", &opcionelegida);
           if (opcionelegida==Preguntas[j].opcioncorrecta){
           	printf("Correcto\nBuen trabajo.");
		   }
            else{
            	printf ("Incorrecto\n");
			}
		break;    	
	}
	fclose(ppreguntasnivel1);	
} 
    
	while (opcion!=4);
	system("cls");
	printf ("HAS PERIDIDO LA OPORTUNIDAD DE ASCENDER.\n");
	
return 0;
}
