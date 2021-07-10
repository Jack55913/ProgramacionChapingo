
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


    #include <iostream>
    #include <cstdlib>
    using namespace std;
    
int main (void)
{
    int i, j, k, filas_a, columnas_a, filas_b, columnas_b;
    cout << "Ingrese el numero de filas de la matriz A   : ";
    cin  >> filas_a;
    cout << "Ingrese el numero de columnas de la matriz A: ";
    cin  >> columnas_a;
    cout << "Ingrese el numero de filas de la matriz B   : ";
    cin  >> filas_b;
    cout << "Ingrese el numero de columnas de la matriz B: ";
    cin  >> columnas_b;
    if (filas_a<1 || columnas_a<1 || filas_b<1 || columnas_b<1 || columnas_a != filas_b)
        cerr << endl << "Las matrices no se pueden multiplicar." << endl;
    else
    {
        cin.get();
        float **a = new float*[filas_a];
        float **b = new float*[filas_b];
        float **c = new float*[filas_a];
        cout << endl;
        
        for (i=0; i<filas_a; i++)
        {
            a[i] = new float[columnas_a];
            for (j=0; j<columnas_a; j++)
            {
                cout << "Ingrese el elemento A[" << i << "][" << j << "]: ";
                cin >> a[i][j];
            }
        }
        cout << endl;
        for (i=0; i<filas_b; i++)
        {
            b[i] = new float[columnas_b];
            for (j=0; j<columnas_b; j++)
            {
                cout << "Ingrese el elemento B[" << i << "][" << j << "]: ";
                cin >> b[i][j];
            }
        }
        for (i=0; i<filas_a; i++)
        {
            c[i] = new float[columnas_b];
            for (j=0; j<columnas_b; j++)
            {
                c[i][j] = 0;
                for (k=0; k<filas_b; k++)
                    c[i][j] += a[i][k] * b[k][j];
            }
        }
        cout << endl << "Resultado:" << endl;
        for (i=0; i<filas_a; i++)
        {
            cout << "[\t";
            for (j=0; j<columnas_b; j++)
                cout << c[i][j] << "\t";
            cout << "]" << endl;
        }
    }
    cout << endl;

    return 0;
}
