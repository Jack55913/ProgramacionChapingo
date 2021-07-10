
/*

Algoritmo ProcesoMultiplicaMatrices
    Escribir Sin Saltar "Ingrese el numero de filas de la matriz A   :";
    Leer filas_a;
    Escribir Sin Saltar "Ingrese el numero de columnas de la matriz A:";
    Leer columnas_a;
    Escribir Sin Saltar "Ingrese el numero de filas de la matriz B   :";
    Leer filas_b;
    Escribir Sin Saltar "Ingrese el numero de columnas de la matriz B:";
    Leer columnas_b;
    Dimension a[filas_a,columnas_a], b[filas_b,columnas_b], c[filas_a,columnas_b];
    Si filas_a<1 O columnas_a<1 O filas_b<1 O columnas_b<1 O columnas_a<>filas_b Entonces
        Escribir "";
        Escribir "Las matrices no se pueden multiplicar.";
    Sino
        Escribir "";
        Para i<-1 Hasta filas_a Con Paso 1 Hacer
            Para j<-1 Hasta columnas_a Con Paso 1 Hacer
                Escribir Sin Saltar "Ingrese el elemento A[", i, "][", j, "]:";
                Leer a[i, j];
            FinPara
        FinPara
        Escribir "";
        Para i<-1 Hasta filas_b Con Paso 1 Hacer
            Para j<-1 Hasta columnas_b Con Paso 1 Hacer
                Escribir Sin Saltar "Ingrese el elemento B[", i, "][", j, "]:";
                Leer b[i, j];
            FinPara
        FinPara
        Para i<-1 Hasta filas_a Con Paso 1 Hacer
            Para j<-1 Hasta columnas_b Con Paso 1 Hacer
                c[i, j]<-0;
                Para k<-1 Hasta filas_b Con Paso 1 Hacer
                    c[i, j]<-c[i, j] + a[i, k] * b[k, j];
                FinPara
            FinPara
        FinPara
        Escribir "";
        Escribir "Resultado:";
        Para i<-1 Hasta filas_a Con Paso 1 Hacer
            Escribir Sin Saltar "[ ";
            Para j<-1 Hasta columnas_b Con Paso 1 Hacer
                Escribir Sin Saltar c[i, j], "    ";
            FinPara
            Escribir "]";
        FinPara
    FinSi
FinAlgoritmo
*/



#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int i, j, k, filas_a, columnas_a, filas_b, columnas_b;
    float **a, **b, **c, f;
    printf ("Ingrese el numero de filas de la matriz A   : ");
    scanf ("%d", &filas_a);
    printf ("Ingrese el numero de columnas de la matriz A: ");
    scanf ("%d", &columnas_a);
    printf ("Ingrese el numero de filas de la matriz B   : ");
    scanf ("%d", &filas_b);
    printf ("Ingrese el numero de columnas de la matriz B: ");
    scanf ("%d", &columnas_b);
    if (filas_a<1 || columnas_a<1 || filas_b<1 || columnas_b<1 || columnas_a != filas_b)
        fprintf (stderr, "\nLas matrices no se pueden multiplicar.\n");
    else
    {
        (void) getchar();
        a = (float**) malloc (sizeof (float*) * filas_a);
        b = (float**) malloc (sizeof (float*) * filas_b);
        c = (float**) malloc (sizeof (float*) * filas_a);
        putchar ('\n');
        for (i=0; i<filas_a; i++)
        {
            a[i] = (float*) malloc (sizeof (float) * columnas_a);
            for (j=0; j<columnas_a; j++)
            {
                printf ("Ingrese el elemento A[%d][%d]: ", i, j);
                scanf ("%f", &f);
                a[i][j] = f;
            }
        }
        putchar ('\n');
        for (i=0; i<filas_b; i++)
        {
            b[i] = (float*) malloc (sizeof (float) * columnas_b);
            for (j=0; j<columnas_b; j++)
            {
                printf ("Ingrese el elemento B[%d][%d]: ", i, j);
                scanf ("%f", &f);
                b[i][j] = f;
            }
        }
        for (i=0; i<filas_a; i++)
        {
            c[i] = (float*) malloc (sizeof (float) * columnas_b);
            for (j=0; j<columnas_b; j++)
            {
                c[i][j] = 0;
                for (k=0; k<filas_b; k++)
                    c[i][j] += a[i][k] * b[k][j];
            }
        }
        printf ("\nResultado:\n");
        for (i=0; i<filas_a; i++)
        {
            printf ("[\t");
            for (j=0; j<columnas_b; j++)
                printf ("%g\t", c[i][j]);
            printf ("]\n");
        }
    }
    putchar ('\n');
    system ("pause");
    return EXIT_SUCCESS;
}