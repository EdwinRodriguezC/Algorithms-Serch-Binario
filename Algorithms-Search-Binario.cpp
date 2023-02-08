#include <iostream> 

using namespace std; 

int main()
{
    //Declarar variables 

    int medio, inicio, fin, valormedio, clave, n, encontrado; 
    int temp, i, j, m, p; 
    inicio = 0;

    //Pedir tamaño de arreglo 

    cout << "Ingrese dimension del arreglo: ";
    cin >> n;
    cout << endl; 
    fin = n - 1; 

    //Crear la variable para el arreglo dinámico
    int * arreglo = new int[n]; 

    //Lllenar arreglo
    for (i = 0;i < n;i++)
    {
        cout << "Ingrese dato [" << i <<"]: "; 
    }

    //Formatear siguientes variables con cero
    temp = 0; 
    j = 0; 
    m = 0; 
    p = 0; 

    //Ordenar arreglo por burbuja 
    for (j = 1; j < n; j++)
    {
        for (m = 0; m < n-1; m++)
        {
            if(arreglo[m]>arreglo[m + 1])
            {
                temp = arreglo[m + 1]; 
                arreglo[m + 1] = arreglo[m]; 
                arreglo[m] = temp;
            }
        }
    }
    //Mostrar arreglo ordenado
    cout << endl; 
    cout << "El arreglo Ordenado es: " << endl; 
    for (p = 0; p <= n -1; p++)
    {
        cout << "Posicion [" << p << "] = " << arreglo[p] <<
        endl; 
    }
    //Pedir dato o clave a buscar 
    cout << "Ingrese dato que desea buscar: " << endl; 
    cin >> clave; 

    //Buscar clave o dato deseado 
    encontrado = 0; 
    while (inicio <= fin)
    {
        //Medio será igual a la mitad de la dimensión del arreglo 
        medio = (fin + inicio) / 2;

        //Si variable medio es similar a la clacve de búsqueda despliega mensaje de encontrado
        if (arreglo[medio] == clave)
        {
            cout << "Se encontro el " << clave << "en la posicion [" << medio << "]" << endl; 
            encontrado = 1; 
            fin = -1; 
        }
        //De lo contrario verifica si la posición del valor medio actual es menor que la clave de búsqeuda
        else
              if (clave < arreglo[medio])
                    fin = medio - 1; 
            else
                 inicio = medio + 1; 
    }
    //Si no encotró la clave despliega el mensaje de no encontrado
    if (encontrado != 1)
          cout << "No se encontro el dato" << endl; 
          //Libera arreglo dinámico en memoria
    delete[] arreglo; 
    system("pause"); 
    return 0; 
}
