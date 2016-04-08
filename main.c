#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float x,y;

    while(seguir=='s')
    {
        system("cls");
        printf("1- Ingresar 1er operando (A=%f)\n",x);
        printf("2- Ingresar 2do operando (B=%f)\n",y);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        if (rango(opcion,1,9)==0){printf("opcion invalida, reingrese.");system("pause");}
        else
        {




                switch(opcion)
            {
                case 1:printf("Ingrese el primer operando: \n");
                scanf("%f",&x);
                    break;
                case 2:printf("Ingrese el segundo operando: \n");
                scanf("%f",&y);
                    break;
                case 3:printf("La suma es: %f",sumaFloat(x,y));system("pause");
                    break;
                case 4:printf("La resta es: %f",restaFloat(x,y));system("pause");
                    break;
                case 5:if(y!=0){printf("La division es: %f",divisionFloat(x,y));system("pause");}
                    if(y==0){printf("error, imposible dividir por 0.");system("pause");}
                    break;
                case 6:printf("La multiplicacion es: %f",multiplicacion(x,y));system("pause");
                    break;
                case 7:printf("El factorial es: %d",facFloat(x));system("pause");
                    break;
                case 8:printf("La suma es: %f",sumaFloat(x,y));
                        printf("La resta es: %f",restaFloat(x,y));
                        if(y!=0){
                            printf("La division es: %f",divisionFloat(x,y));
                        }
                        if(y==0){printf("error, imposible dividir por 0.");}
                        printf("La multiplicacion es: %f",multiplicacion(x,y));
                        printf("El factorial es: %d",facFloat(x));
                        system("pause");
                    break;
                case 9:
                    seguir = 'n';
                    break;
            }
        }
    }


    return 0;
}
