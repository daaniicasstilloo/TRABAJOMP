#include<stdio.h>
#include<stdlib.h>

int main(void)
{
char eleccion;
int *vector;
int n=1;
int i=0;
int cuenta=0;

    do
    {
        printf("Introduce un valor para tu vector \n");
            vector=(int *)malloc(n *sizeof(int));
                if(vector==NULL)
                printf("No se ha podido reservar memoria para el vector \n");

                else
                scanf("%d",&vector[i]);
                fflush(stdin);
                i++;

                printf("Desea volver a introducir otro valor para el vector pulse S o N \n");
                scanf("%c",&eleccion);
                fflush(stdin);

                    


    } while (eleccion=='S'||eleccion=='s');
    
    n=0;

    while(n<i)
    {
       cuenta++;
       n++; 

    }

    printf("El vector tiene %d elementos \n",cuenta);


}


