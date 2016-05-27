#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
int main()
{
    system("color A");
    EMovie movies[2];
    char seguir='s';
    int opcion=0;
	int i;
    for(i=0;i<2;i++){
		    movies[i].vacio=1;
    }

    while(seguir=='s')
    {
        printf("1- Agregar pelicula\n");
        printf("2- Borrar pelicula\n");
        printf("3- Generar pagina web\n");
        printf("4- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
               loadMovie(movies,2);
                break;
            case 2:
                break;
            case 3:generarPagina(movies,2);
               break;
            case 4:seguir='n';
				break;
        }//fin switch
    }//fin while
    return 0;
}
