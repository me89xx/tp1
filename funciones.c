#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

/**
 *  Agrega una pelicula al archivo binario
 *  @param movie la estructura a ser agregada al archivo
 *  @return retorna 1 o 0 de acuerdo a si pudo agregar la pelicula o no
 */
int agregarPelicula(EMovie movie)
{

}
/**
 *  Borra una pelicula del archivo binario
 *  @param movie la estructura a ser eliminada al archivo
 *  @return retorna 1 o 0 de acuerdo a si pudo eliminar la pelicula o no
 */
int borrarPelicula(EMovie movie)
{

}

/**
 *  Genera un archivo html a partir de las peliculas cargadas en el archivo binario.
 *  @param lista la lista de peliculas a ser agregadas en el archivo.
 *  @param nombre el nombre para el archivo.
 */
void generarPagina(EMovie lista[],int length)
{
    int i;
    FILE* pA;
    pA=fopen("index.html","ab");
    fprintf(pA,"<!DOCTYPE html><!-- Template by Quackit.com --><html lang='en'><head><meta charset='utf-8'><meta http-equiv='X-UA-Compatible' content='IE=edge'><meta name='viewport' content='width=device-width, initial-scale=1'><!-- The above 3 meta tags *must* come first in the head; any other head content must come *after* these tags --><title>Lista peliculas</title><!-- Bootstrap Core CSS --><link href='css/bootstrap.min.css' rel='stylesheet'><!-- Custom CSS: You can use this stylesheet to override any Bootstrap styles and/or apply your own styles --><link href='css/custom.css' rel='stylesheet'><!-- HTML5 Shim and Respond.js IE8 support of HTML5 elements and media queries --><!-- WARNING: Respond.js doesn't work if you view the page via file:// --><!--[if lt IE 9]><script src='https://oss.maxcdn.com/libs/html5shiv/3.7.0/html5shiv.js'></script><script src='https://oss.maxcdn.com/libs/respond.js/1.4.2/respond.min.js'></script><![endif]--></head><body><div class='container'><div class='row'>");
    for(i=0;i<length;i++)
    {
        if(lista[i].vacio!=1)
        {

        fprintf(pA,"<article class='col-md-4 article-intro'><a href='#'><img class='img-responsive img-rounded' src='%s'",lista[i].linkImagen);
        fprintf(pA,"alt=''> </a><h3><a href='#'>%s",lista[i].titulo);
        fprintf(pA,"</a></h3> <ul><li>Genero:%s</li>",lista[i].genero);
        fprintf(pA,"<li>Puntaje:%d",lista[i].puntaje);
        fprintf(pA,"</li><li>Duracion:%d",lista[i].duracion);
        fprintf(pA,"</li></ul> <p>%s</p></article>",lista[i].descripcion);
        }
    }

fprintf(pA,"</div><!-- /.row --></div><!-- /.container --><!-- jQuery --><script src='js/jquery-1.11.3.min.js'></script><!-- Bootstrap Core JavaScript --><script src='js/bootstrap.min.js'></script><!-- IE10 viewport bug workaround --><script src='js/ie10-viewport-bug-workaround.js'></script><!-- Placeholder Images --><script src='js/holder.min.js'></script></body></html>");


fclose(pA);
}

/** \brief busca la primer pelicula vacia
 * \param peliculas lista de peliculas
 * \param largo tamaño de la lista de peliculas
 * \return indice de una pelicula vacia o -1 si no encontro
 *
 */

int buscarLibre(EMovie peliculas[],int largo)
{
	int index=-1,i;
	for( i=0; i < largo; i++)
	   {
	       if(peliculas[i].vacio==1)
            {
                index=i;
                break;
            }
	   }
	return index;
}

/** \brief crea una nueva pelicula
 * \param lista de peliculas
 * \param largo de la lista
 */
void loadMovie(EMovie movies[],int largo)
{
	int index;
	index=buscarLibre(movies,largo);
	if(index!=-1)
	{
	    movies[index].vacio=0;
	   printf("\ntitulo: ");
	    fflush(stdin);
	   gets(movies[index].titulo);
	   printf("\ndescripcion: ");
	    fflush(stdin);
	    gets( movies[index].descripcion);
	    printf("\ngenero: ");
	    fflush(stdin);
	      gets(movies[index].genero);
	      printf("\npuntaje: ");
	      scanf("%d",&movies[index].puntaje);
	      printf("\nduracion: ");
	      scanf("%d",&movies[index].duracion);

	}

}
