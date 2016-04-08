#include <stdio.h>
#include <stdlib.h>


/** \brief suma dos flotantes y los retorna
*   \param dato1 es el primer flotante a sumar
*   \param dato2 es el segundo flotante a sumar
*   \return retorn el resultado de la suma
*/
float sumaFloat(float dato1,float dato2)
{
    float sumatoria=dato1+dato2;
    return sumatoria;
}
/** \brief resta dos flotantes y los retorna
*   \param dato1 es el primer flotante a restar
*   \param dato2 es el segundo flotante a sumar
*   \return retorn la diferencia de la resta
*/
float restaFloat(float dato1,float dato2)
{
   float diferencia=dato1-dato2;
   return diferencia;
}
/** \brief divide dos flotantes y los retorna
*   \param dato1 es el primer flotante a dividir
*   \param dato2 es el segundo flotante a dividir
*   \return retorn el cociente de la division
*/
float divisionFloat(float dato1,float dato2)
{
    float cociente=dato1/dato2;
    return cociente;

}
/** \brief multiplica dos flotantes y los retorna
*   \param dato1 es el primer flotante a multiplicar
*   \param dato2 es el segundo flotante a multiplicar
*   \return retorn el producto de la multiplicacion
*/
float multiplicacion(float dato1,float dato2)
{
    float producto=dato1*dato2;
    return producto;
}
/** \brief  resuelve el factorial de un entero y lo retorna
*   \param  num es el entero a operar
*   \return devuelve el resultado de la operacion
*/
int facFloat(int num)
{
    int fac;
    if(num==0)
    {
        return 1;
    }
    else
    {
        fac=num*facFloat(num-1);
        return fac;
    }
}
/** \brief valida el de un entero ingresado con un maximo y un minimo
*   \param el entero debe ser menor o igual al maximo. En caso contrario no accede al menu
*   \param el entero debe ser mayor o igual al minimo. En caso contrario no accede al menu
*   \return de ser valida retorna con 1. Caso contrario retorna 0
*/
int rango(int dato,int minimo,int maximo)
{
    if(dato>=minimo&&dato<=maximo)
    {
        return 1;
    }
    else{return 0;}
}
