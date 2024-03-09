#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(void)
{
char *c1;
char el;
int i=0;

do
{
    if(i==0)
    {
        c1=(char *)malloc(1*sizeof(char));
        if(c1==NULL)
        printf("No se ha podido reservar memoria \n");

        else
        {   
            printf("Memoria reservada con exito \n");
            printf("Introduce un caracter \n");
            scanf("%c",&c1[i]);
            i++;
            fflush(stdin);

        }
    }

    else
    {
        c1=(char *)realloc(c1,1*sizeof(char));
        if(c1==NULL)
        printf("No se ha podido ampliar la reserva de memoria para la cadena \n");

        else
        {
            printf("Memoria ampliada con exito \n");
            printf("Introduce otro caracter \n");
            scanf("%c",&c1[i]);
            i++;
            fflush(stdin);

        }


    }

    printf("Desea introducir otro caracter \n");
    scanf("%c",&el);
    fflush(stdin);




} while (el=='S'||el=='s');



printf("%s \n",c1);
free(c1);
return 0;


}




