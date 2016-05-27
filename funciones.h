#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
typedef struct{
    char titulo[20];
    char genero[20];
    int duracion;
    char descripcion[50];
    int puntaje;
    char linkImagen[50];
    int vacio;
}EMovie;

int agregarPelicula(EMovie movie);

int borrarPelicula(EMovie movie);

void generarPagina(EMovie lista[],int);

int buscarLibre(EMovie peliculas[],int);

void loadMovie(EMovie movies[],int);

#endif // FUNCIONES_H_INCLUDED

