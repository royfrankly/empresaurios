template <class T>
class MetodosBusqueda {
public:
    int busquedaBinaria(const T *A, int n, const T& elementoBuscado);
    int busquedaRapida(const T *A, int n, const T& elementoBuscado);
    void quicksort(T *A, int izquierda, int derecha);
private:
    void intercambia(T *A, int i, int j) {
        T temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
    template <class T>
    int MetodosBusqueda<T>::particion(T *A, int izquierda, int derecha) {
        T pivote = A[derecha];
        int i = izquierda - 1;

        for (int j = izquierda; j < derecha; ++j) {
            if (A[j] <= pivote) {
                i++;
                intercambia(A, i, j);
            }
        }

        intercambia(A, i + 1, derecha);
        return i + 1;
    }
};
template <class T>
int MetodosBusqueda<T>::busquedaBinaria(const T *A, int n, const T& elementoBuscado) {
    int izquierda = 0;
    int derecha = n - 1;

    while (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;
        if (A[medio] == elementoBuscado) {
            return medio;  // Elemento encontrado
        } else if (A[medio] < elementoBuscado) {
            izquierda = medio + 1;
        } else {
            derecha = medio - 1;
        }
    }

    return -1;  // Elemento no encontrado
}
//es una busqueda lineal del array
template <class T>
int MetodosBusqueda<T>::busquedaRapida(const T *A, int n, const T& elementoBuscado) {
    for (int i = 0; i < n; ++i) {
        if (A[i] == elementoBuscado) {
            return i;  // Elemento encontrado
        }
    }

    return -1;  // Elemento no encontrado
}
template <class T>
void MetodosBusqueda<T>::quicksort(T *A, int izquierda, int derecha) {
    if (izquierda < derecha) {
        int indiceParticion = particion(A, izquierda, derecha);
        quicksort(A, izquierda, indiceParticion - 1);
        quicksort(A, indiceParticion + 1, derecha);
    }
}


