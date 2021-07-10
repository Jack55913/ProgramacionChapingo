// MÉTODO BURBUJA

#include <stdio.h>

void ordenar_numeros(int arreglo[], int lon)
{
    int i, j, aux;
    for (i = 0; i < lon; i++)
    {
        for (j = 0; j < lon - 1; j++)
        {
            if (arreglo[j] > arreglo[j + 1])
            { 
                aux = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = aux;
            }
        }
    }

    for (i = 0; i < lon; i++)
    {
        printf("%d ", arreglo[i]);
    }
}

int main()
{

    int lon, n;
    printf("Ingresa la cantidad de valores a ordenar: ");
    scanf("%d", &lon);
    int arr[lon], i;
    for (i = 0; i < lon; i++)
    {
        printf("Ingresa el numero %d: ", i + 1);
        scanf("%d", &n);
        arr[i] = n;
    }

    printf("\nLos numeros ordenados son: \n");
    ordenar_numeros(arr, lon);

    return 0;
}







//https://www.youtube.com/watch?v=WP9dOMewKlE








/* Es una variable auxiliar. Te explico, como "arreglo[j]" lo vas a igualar a  arreglo[j+ 1] y  
arreglo[j+ 1]  lo igualar'as a arreglo[j] entonces:
Si no guardas lo que vale "arreglo[j]" en otra variable perderás el valor y no podrás igualar  
arreglo[j+ 1] a lo que valía arreglo[j]  porque para este momento las dos posiciones del arreglo 
ya valen lo mismo, entonces antes de cambiar el valor de arreglo[j] lo guardas en aux..
aux =  arreglo[j] ;
 arreglo[j]  = arreglo[j+ 1]; 
 arreglo[j+ 1] =   aux; */


 //cuando declaras el arreglo, indicas qe lo quieres de tres arreglo[3]



/*
El método burbuja  consta de comparar cada elemento con todos los demás elementos e ir cambiándolos 
de posición según sea mayor o menor el dato. Entonces en cada iteración de "i", comparas el numero 
que se encuentra en esa posición con todos los números del arreglo por lo que iteras N veces "j" 
haciendo un if en cada iteración.

N=Numero de elementos del array.

Más info: https://es.wikipedia.org/wiki/Ordenamiento_de_burbuja   */




/*if(arreglo[j]>arreglo[j+1]) {
aux=arreglo[j];
arreglo[j]=arreglo[j+1];
arreglo[j+1]=aux;}

Si se cumple la condición arreglo[j]>arreglo[j+1], entonces lo que se quiere es cambiarlos de orden, 
aux te sirve para guardar el valor de arreglo[j] y asignarle a arreglo[j] el valor de arreglo[j+1], 
sin perder el valor que antes tenia, entonces igualas arreglo[j]=arreglo[j+1];, y arreglo[j+1]= aux 
(lo que valía arreglo[j] antes de que lo modificaras.)... 
*/