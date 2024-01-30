template <class T>
class MetodosOrdenacion {
public:
    void burbuja(T *A, int n);
    void insercion(T *A, int n);
    void seleccion(T *A, int n);

private:
    void intercambia(T *A, int i, int j) {
        T temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
};

template <class T>
void MetodosOrdenacion<T>::burbuja(T *A, int n) {
    for (int i = 1; i <= n - 1; i++)
        for (int j = 1; j <= n - i; j++)
            if (A[j] > A[j + 1])
                intercambia(A, j, j + 1);
}

template <class T>
void MetodosOrdenacion<T>::insercion(T *A, int n) {
    for (int i = 1; i < n; i++) {
        T key = A[i];
        int j = i - 1;

        while (j >= 0 && A[j] > key) {
            A[j + 1] = A[j];
            j = j - 1;
        }

        A[j + 1] = key;
    }
}

template <class T>
void MetodosOrdenacion<T>::seleccion(T *A, int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
            if (A[j] < A[minIndex])
                minIndex = j;

        intercambia(A, i, minIndex);
    }
}