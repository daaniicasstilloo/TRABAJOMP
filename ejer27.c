
#include<stdio.h>
#define MAX 3
#include<string.h>

typedef struct{
    char nom[15], ape[20], dni[10];
    int edad;
}persona;

void ini_struct(persona [], int);
int buscar (persona [], char *, int);

int main(){
    persona pers[MAX];
    char dni[10];
    int edad;

    ini_struct(pers,MAX);

    fflush(stdin);

    printf("Introduce un dni: ");
    fgets(dni,10,stdin);
    printf("\n");

    if(buscar(pers,dni,MAX)!=0)
            printf("La persona existe y es la persona %i\n",buscar(pers,dni,MAX)+1);
    else
        printf("La persona no existe\n");


return 0;
}



void ini_struct(persona p[], int n){
    int i=0;

    while(i<n){

    printf("Introduce el nombre de la %i persona: ",i+1);
    fgets(p[i].nom,15,stdin);

    printf("\n");

    printf("Introduce el apellido de la %i persona: ",i+1);
    fgets(p[i].ape,20,stdin);

    printf("\n");

    printf("Introduce la edad de la %i persona: ",i+1);
    scanf("%i",&p[i].edad);

    printf("\n");
    fflush(stdin);

    printf("Introduce el DNI de la %i persona: ",i+1);
    fgets(p[i].dni,10,stdin);

    printf("\n");
    fflush(stdin);

    i++;
    }
}




int buscar (persona p[], char *c, int n){
    int i=0;

    while(i<n && strcmp ( p[i].dni, c )!=0){

        i++;
    }

    if (strcmp ( p[i].dni, c )!=0)
        i=0;

    return i;
}
