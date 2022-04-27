//El proyecto empieza aqui 
#include <stdio.h>

//vector de estructura 
struct TEmpleado{
	char nombre[50], apellido[50];
	int Nexpediente[10];
}TEmpleado;

int main(){
	int i=0;
	int opcion;
	struct TEmpleado Empleados[300]; //guardamos el espacio suficiente para 300 empelados 
	
	printf("Registrarse\n");
	printf("Introduce tu normbre\n Nombre:");
	scanf("%s", &Empleados[i].nombre);
	printf("Introduce tu apellido\n Apellido:");
	scanf("%s", &Empleados[i].apellido);
	printf("Introduce tu numero de expedinte\n Numero de expediente:");
	scanf("%d", &Empleados[i].Nexpediente);
	
		switch (opcion){
		case 1:
		system("cls");
            printf ("\n");
    		printf ("Explicación de la yinkana\n");
        	printf("Yinkana compuesta por tres fases, inicial, intermedia y final. Debereis superar pruebas para poder pasar de fases, ya que la segunda y tercera fase tienen el requisito de un mínimo de puntos para acceder a ella, si no obteneis dicho numero de puntos inmediatamente sereis eliminados.\n");
    break; 
		}  		
}
	
