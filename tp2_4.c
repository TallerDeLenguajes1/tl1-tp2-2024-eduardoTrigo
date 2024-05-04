#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define MAX 5

struct
{
    int velocidad;
    int anio;
    int cantidad;
    char *tipo_cpu;
} typedef compu;

compu cargarCompu();
void mostrarPc(compu computadoras[MAX]);
void compuMasVieja(compu computadoras[MAX]);

int main()
{
    srand(time(NULL));
    compu computadoras[MAX];

    for (int i = 0; i < MAX; i++)
    {
        computadoras[i]=cargarCompu();
    }
    
    mostrarPc(computadoras);

    compuMasVieja(computadoras);
    // printf("ingrese velocidad:\n");
    // scanf("%d",&comput.velocidad);
    // printf("Ingrese anio:\n");
    // scanf("%d", &comput.anio);
    // printf("ingrese cantidad:\n", &comput.cantidad);
    // scanf("%d", &comput.cantidad);
    // printf("ingrese tipo:\n");
}

compu cargarCompu()
{
    char tipos[6][10] = {"intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    compu nuevo;
    nuevo.velocidad = rand() % 3 + 1;
    nuevo.anio = rand() % 7 + 2015;
    nuevo.cantidad = rand() % 9;
    fflush(stdin);
    nuevo.tipo_cpu =(char*) malloc(strlen(tipos[rand() % 6]) + 1); // Asignar memoria para la cadena
    strcpy(nuevo.tipo_cpu, tipos[rand() % 6]); // Copiar la cadena de caracteres

    return nuevo;
};

void mostrarPc(compu computadoras[MAX]){
    for (int i = 0; i < 5; i++)
    {
        printf("computadora numero: %d\n",i+1);
        printf("velocidad: %d\n",computadoras[i].velocidad);
        printf("anio: %d\n",computadoras[i].anio);
        printf("tipo: %s\n",computadoras[i].tipo_cpu);
        printf("cantidad: %d\n",computadoras[i].cantidad);
        printf("\n");
    }
    
}

void compuMasVieja(compu computadoras[MAX]){
    int masVieja = 2024;
    int indice ;
    for (int i = 0; i < 5; i++)
    {
        if (computadoras[i].anio < masVieja)
        {
            masVieja = computadoras[i].anio;
            indice = i;
        }
    }
    printf("la pc mas vieja es la pc n° %d\n",indice+1);
    printf("velocidad: %d\n", computadoras[indice].velocidad);
    printf("tipo: %s\n", computadoras[indice].tipo_cpu);
    printf("anio: %d\n", computadoras[indice].anio);
    printf("cantidad: %d\n", computadoras[indice].cantidad);
}