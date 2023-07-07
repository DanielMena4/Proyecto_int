#include<stdio.h>
int main(void){
    int numvacas;
    int pesovaca;
    int pesocamion;
    int pesototalvacas;
    int menu;
    float litrostotal;
    float litrosleche;
    while (menu!=2)
    {
        printf (" \n");
        printf("Bienvenido al menu\n");
        printf ("(1)Ingresar al programa\n");
        printf ("(2)Salir\n");
        scanf("%d",&menu);
        switch (menu){
        case 1:  printf ("Ingrese el numero de vacas disponibles para la venta\n");
                 scanf ("%d",&numvacas);
                 if (numvacas<=0){
                    do{
                        printf ("Ingrese un numero valido de vacas\n");
                        scanf ("%d",&numvacas);
                         } while (numvacas<=0);
                         }
                 printf ("Peso maximo que el camion puede llevar en kg\n");
                 scanf ("%d",&pesocamion);
                 if (pesocamion<=0){
                    do{
                        printf ("Ingrese un peso valido\n");
                        scanf ("%d",&pesocamion);
                        } while (pesocamion<=0);
                        }
                 printf ("Peso de una vaca en kg\n");
                 scanf ("%d",&pesovaca);
                 if (pesovaca<=0){ 
                    do{
                        printf ("Ingrese un peso valido\n");
                        scanf ("%d",&pesovaca);
                        } while (pesovaca<=0);
                        }
                 printf ("Produccion de leche en litros por dia\n");
                 scanf ("%f",&litrosleche);
                 if (litrosleche<=0){
                    do{
                        printf ("Ingrese una cantidad valida\n");
                        scanf ("%f",&litrosleche);
                         } while (litrosleche<=0);
                         }
                 pesototalvacas=numvacas*pesovaca;
                 if(pesototalvacas<=pesocamion){
                    litrostotal=numvacas*litrosleche;
                    printf ("Numero de vacas que se pueden comprar: %d\n",numvacas);
                    printf ("Cantidad maxima de leche en litros que se puede obtener por la compra de las vacas: %.2f\n",litrostotal);
                    }
                else{
                    while (pesototalvacas>=pesocamion)
                    {
                        pesototalvacas=pesototalvacas-pesovaca;
                        numvacas=numvacas-1;
                        }
                 printf ("Numero de vacas que se pueden comprar: %d\n", numvacas);
                 litrostotal=numvacas*litrosleche;
                 printf ("Cantidad maxima de leche en litros que se puede obtener por la compra de las vacas: %.2f\n",litrostotal);
                 }
    break;
    case 2:
    printf ("gracias por usar\n");
    break;
    default:
    printf ("Opcion no valida\n");
    break;
    }
    }
    return 0;
}